class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        int cnt=0;
        for(int i =0; i<nums.size(); i++){
            if(val == nums[i]){
                cnt++;
            } else {
                temp.push_back(nums[i]);
            }
        }

        for(int i = 0; i< temp.size(); i++){
            nums[i] = temp[i];
        }

        return nums.size()-cnt;
        
    }
};
