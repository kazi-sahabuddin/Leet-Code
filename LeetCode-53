class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int maxSum=nums[0];

        for(int num:nums){
            cs += num;
            maxSum = max(maxSum, cs);
            if(cs < 0){
                cs = 0;
            }
        }

        return maxSum;        
    }
};
