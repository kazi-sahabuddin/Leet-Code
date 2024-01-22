class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=-1;

        int l=0, r = nums.size()-1;

        while(l<=r)
        {
            int mid = (l+r)/2;

            if(mid > l && nums[mid]<nums[mid-1])
            {
                ans = nums[mid];
                break;
            }
            else if(mid < r && nums[mid] > nums[mid+1])
            {
                ans = nums[mid + 1];
                break;
            }
            else if(nums[mid] > nums[r])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }

        }

        if(ans==-1)
            ans=nums[0];

        return ans;
    }
};
