class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> memo(nums.size(), 1);

        for(int i=1; i<nums.size();i++){
            for(int j=0; j<i;j++){
                if(nums[j]<nums[i]){
                    memo[i] = max(memo[i], memo[j]+1);
                }
            }
             

        }

        int mx = memo[0];
        //cout<<"0 -> "<<mx<<endl;
        for(int i =1; i<memo.size();i++){
            //cout<<i<<" -> "<<memo[i]<<endl;
            if(mx<memo[i]){
                mx = memo[i];
            }

        }

        return mx;
        
    }
};
