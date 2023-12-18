class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
        
    }
};

//using vector

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int> vec(26,0);
        for(char ch:s){
            vec[ch-'a'] +=1;
        }
        for(char ch: t){
            vec[ch-'a'] -=1;
        }

        for(int i=0;i<vec.size();i++){
            if(vec[i] != 0)
            {
                return false;
            }
        }

        return true;
        
    }
};
