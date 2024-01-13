class Solution {
public:
    int minSteps(string s, string t) {

        int cntChar[26] = {0};

        for(int i = 0; i < s.size(); i++){
            cntChar[t[i]-'a']++;
            cntChar[s[i]-'a']--;
        }

        int ans = 0;
        for(int i = 0; i < 26; i++){
           if(cntChar[i] != 0)
             cout<<(char)('a'+i)<<" "<<cntChar[i]<<endl;
            ans+= max(0,cntChar[i]);
        }

        return ans;
        
    }
};
