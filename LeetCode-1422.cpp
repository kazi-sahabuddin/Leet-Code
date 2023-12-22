class Solution {
public:
    int maxScore(string s) {
        int ones =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
            {
                ones++;
            }
        }
        int mx=INT_MIN;
        int zero=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                zero++;
            } else {
                ones--;
            }
            if(mx<(ones+zero)){
                mx=ones+zero;
            }
        }

        return mx;

        
    }
};
