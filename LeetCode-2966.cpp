class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int n= nums.size();

        vector<vector<int>> ans(n/3,vector<int>(3));
        int cnt=0;
        int j=0;
        for(int i=0;i<n;i++){
            ans[j][cnt++]=nums[i];
            if(cnt==3){                
                cnt=0;
                j++;                
            }
        }

        for(int i =0; i<ans.size();i++)
        {
            if( ans[i][2]-ans[i][0] > k  ) {
                return {};
            }
        }      
        return ans;
    }
};
