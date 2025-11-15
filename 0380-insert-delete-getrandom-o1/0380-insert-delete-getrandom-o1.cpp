class RandomizedSet {
public:
    unordered_map<int,int>mp;
    vector<int>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) // agr map mai already present hai to
            return false;
        v.push_back(val);
        mp[val]=v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()) //agr map mai present hi nhi hai toh
            return false;
        int idx=mp[val]; //access the idx which we have to remove
        int lastelemt=v.back();
        
        v[idx]=lastelemt; //jisko maine remove krna hai uske index pe mai last elment ko insert krwa dungi vector mai
        mp[lastelemt]=idx; //map mai bhi lastelemt tha jo uske index ko update krwa k jha pe uski updated jgh hai vha rkh diya
        v.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int n=v.size();
        return v[rand()%n];    //rand() function 0...(n-1) tk ka koi si bhi random value return krega
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */