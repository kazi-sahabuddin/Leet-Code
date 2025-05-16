class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        if(nums[nums.size()-1] < target) return nums.size();
        if(nums[0] > target) return 0;

        int l = 0;
        int r = nums.size()-1;
        while(l <= r){
            int mid = (l+r)/2;
            cout<<nums[mid];
            if(nums[mid] == target) return mid;
            if(mid >= 1 && (nums[mid] > target && target > nums[mid-1])) return mid;
            if(nums[mid]> target){
                r = mid -1;
            }

            if(nums[mid] < target){
                l = mid + 1;
            }
        }

        return -1;
        
    }
};
