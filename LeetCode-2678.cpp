class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;

        for(string s : details){
            if(60 < stoi(s.substr(11,2))){
                cnt++;
            }
        }
        return cnt;
    }
};
