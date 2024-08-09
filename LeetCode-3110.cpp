class Solution {
public:
    int scoreOfString(string s) {
        int x = 0;
        for(int i = 0; i < s.size()-1; i ++){
            x += abs(s[i] - s[i+1]);
        }
        return x;
    }
};
