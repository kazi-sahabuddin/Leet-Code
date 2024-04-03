class Solution {
public:
    int lengthOfLastWord(string s) {
        int lsize = 0;

        for(int i = s.size()-1; i >= 0; i--){
            if(lsize == 0 && s[i] == ' '){
                continue;
            }

            if(lsize > 0 && s[i] == ' '){
                break;
            }

            lsize++;
        }

        return lsize;
        
    }
};
