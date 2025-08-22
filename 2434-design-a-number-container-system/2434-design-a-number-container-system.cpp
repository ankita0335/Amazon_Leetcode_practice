class NumberContainers {
public:
    NumberContainers() {
        
    }
    unordered_map<int,set<int>>number_indexes;
    unordered_map<int,int>index_number;
    void change(int index, int number) 
    {
        if(index_number.count(index))
        {
            int oldnumber = index_number[index];
            number_indexes[oldnumber].erase(index);
            if(number_indexes[oldnumber].empty())
                number_indexes.erase(oldnumber);
        }
        index_number[index]= number;
        number_indexes[number].insert(index);
    }
    
    int find(int number) {
        if (number_indexes.count(number) && !number_indexes[number].empty()) {
        return *number_indexes[number].begin();
    }
    return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */