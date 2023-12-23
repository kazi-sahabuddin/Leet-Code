class Solution {
public:
   // bool checkPalin()
    bool isPalindrome(string s) {
        regex pattern ("[^a-zA-Z0-9]");
        s = regex_replace(s,pattern,"");
        transform(s.begin(), s.end(), s.begin(), ::tolower); 

        for(int i=0, j = s.size()-1;i<=j;i++,j--){
            if(s[i] != s[j]){
                return false;
            }
                
        }
        

        return true;

        
    }
};


//

class Solution {
public:
    bool isPalindrome(string s) {
        
        int start = 0;
        int end = s.size()-1;

        while(start<=end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            } else {
                start++;
                end--;
            }

        }

        return true;
    }
};
