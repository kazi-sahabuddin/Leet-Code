class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int pre=arr[0];
        int cnt=1;
        int mx=0;
        int ans;
        for(int i =1;i<arr.size();i++)
        {
            if(pre != arr[i])
            {
                if(cnt>mx)
                {
                    ans=pre;
                    mx=cnt;
                }
                cnt=1;                
                pre=arr[i];

            } else {
                cnt++;
            }
        }
        if(cnt>mx)
        {
            ans=pre;
            mx=cnt;
        }
        return ans;
        
    }
};
