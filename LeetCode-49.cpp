class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<int>> mp;

        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(i);
        }

        vector<vector<string>> ans;

        for(auto x : mp){
            
            vector<string> r;
            for(auto y:x.second){
                r.push_back(strs[y]);
            }

            ans.push_back(r);
        }

        return ans;

    }
};


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(string ss : strs){
            string s = ss;
            sort(s.begin(), s.end());
            mp[s].push_back(ss);
        }

        vector<vector<string>> ans;

        for(auto x : mp){
            ans.push_back(x.second);
        }

        return ans;
    }
};
