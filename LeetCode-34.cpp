class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIndx = -1;
        int lastIndx = -1;

        int f=0, r=nums.size()-1;
        while(f<=r)
        {
            int mid = (f+r)/2;
            if(nums[mid] == target)
            {
                firstIndx = mid;
                r = mid - 1;
            }
            else if(nums[mid] > target)
            {
                r = mid-1;
            }
            else
            {
                f = mid+1;
            }            
        }

         f=0, r=nums.size()-1;
        while(f<=r)
        {
            int mid = (f+r)/2;
            if(nums[mid] == target)
            {
                lastIndx = mid;
                f = mid + 1;
            }
            else if(nums[mid] > target)
            {
                r = mid-1;
            }
            else
            {
                f = mid+1;
            }            
        }

        return {firstIndx, lastIndx};
    }
};
