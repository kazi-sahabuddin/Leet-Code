class RandomizedSet {
    unordered_map<int,int> rSet;
    vector<int> vec;
public:
    RandomizedSet() {
        
    }

    bool search(int val){
        if(rSet.count(val) != 0)
            return true;
        return false;
    }
    
    bool insert(int val) {
        if(search(val))
            return false;
        vec.push_back(val);
        rSet[val] = vec.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(!search(val)){
            return false;
        }
        // swap the current item and the back item
        int currentIdx = rSet[val];
        rSet[vec.back()] = currentIdx;
        vec[currentIdx] = vec.back();
        // revmvoe the back item (after swapping)
        vec.pop_back();
        rSet.erase(val);

        return true;
    }
    
    int getRandom() {
       return vec[rand() % vec.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
