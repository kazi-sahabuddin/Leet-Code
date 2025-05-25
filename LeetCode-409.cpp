class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;

        for(char c:s){
            mp[c]++;
        }

        if(mp.size() == 1){
            for(auto p:mp){
                return p.second;
            }
        }

        int cnt=0;
        bool one = true;
        for(auto m: mp)
        {
            if(m.second % 2 ==0){ 
                cnt+=m.second;
            }else{
                int x = m.second/2;
                cnt+= (x*2);
            }
            if(one && m.second %2== 1){
                cnt++;
                one=false;
            }
        }

        return cnt;
    }
};
