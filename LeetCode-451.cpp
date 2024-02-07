class Solution {

public:

    string frequencySort(string s) {
        unordered_map<char,int> ump;
        vector<pair<int, char>> pv;
        for(char x : s){
            ump[x]++;
        }

        for(auto x : ump){
            pv.push_back({x.second, x.first});
        }

        sort(pv.begin(), pv.end(), greater<pair<int, char>>());


        s.clear();
        for(auto x: pv){
            while(x.first--){
                s+=x.second;
            }
        }

        return s;
    }
};
