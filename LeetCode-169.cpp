// Approach #1
//Hash Map

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target = nums.size()/2;
        unordered_map<int,int> umap;
        for(int num : nums){
            umap[num]++;
        }

        for(auto x : umap){
            if(x.second > target){
                return x.first;
            }
        }
        return -1;
    }
};

//Approach #2
//Sorting
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target = nums.size()/2;
       sort(nums.begin(), nums.end());
        return nums[target];
    }
};

//Approach #3
//Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for(int num : nums){
            if(count == 0){
                candidate = num;
            }
            if(candidate == num){
                count++;
            } else {
                count--;
            }
        }
       
        return candidate;
    }
};
