class LRUCache {
public:
    list<int>doublyll;
    map<int,pair<list<int>::iterator,int>>cache; //key, {listnode, value}
    int capacity;
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    void makemostrecent(int key)
    {
        doublyll.erase(cache[key].first);
        doublyll.push_front(key);
        cache[key].first = doublyll.begin();
    }
    int get(int key) {
        if(!cache.count(key))
            return -1;
        else
            makemostrecent(key);
            return cache[key].second;
    }
    
    void put(int key, int value) {
        if(cache.count(key))
        {
            cache[key].second = value;
            makemostrecent(key);
        }
        else
        {
            doublyll.push_front(key);
            cache[key] = {doublyll.begin(), value};
            capacity--;
        }
        if(capacity < 0) {
            cache.erase(doublyll.back());
            doublyll.pop_back();
            capacity++;
        }
    }
};  
    
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */