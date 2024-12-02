class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> sl;
        for(int num:nums){
            sl.insert(num);
        }
                
        return sl.size() < nums.size();
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> sl(nums.begin(), nums.end());                
        return sl.size() < nums.size();
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> dup;
        for (int num : nums) {
            if (dup[num] >= 1)
                return true;
            dup[num]++;
        }
        return false;
    }
};
