class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x = nums.size();
        k = k % x;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums.end());        
    }
};
