class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0};
        for(int i = 0; i<nums.size();i++){
            freq[nums[i]]++;
        }
        
        int mx = -1;
        for(int i =0; i<101;i++)
        {
            if(mx<freq[i])
            {
                mx = freq[i];
            }
        }
        
        int ans = 0;
        for(int i =0; i<101;i++)
        {
            if(mx==freq[i])
            {
                ans+= freq[i];
            }
        }
        
        return ans;
    }
};
