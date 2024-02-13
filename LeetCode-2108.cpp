class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            bool f = true;
            for(int l = 0, r = words[i].size()-1; l<=r; l++, r--){
                if(words[i][l] != words[i][r]){
                    f = false;
                    break;
                }
            }
            if(f){
                return words[i];
            }
        }

        return "";
    }
};
