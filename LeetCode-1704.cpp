class Solution {
public:
    bool halvesAreAlike(string s) {
        int halfOne=0;
        int halfTwo=0;

        string vowels = "aeiouAEIOU";
        
        for(int i = 0; i< s.size()/2; i++){

            size_t found = vowels.find(s[i]);
            if(found != string::npos){
                halfOne++;
            }

        }

        for(int i = s.size()/2; i< s.size(); i++){

            size_t found = vowels.find(s[i]);
            if(found != string::npos){
                halfTwo++;
            }

        }

        return halfOne == halfTwo;
    }
};
