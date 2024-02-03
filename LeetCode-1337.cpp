class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       priority_queue < pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > sqn;
       for(int i = 0; i< mat.size(); i++) {
           int cnt = 0;
           for(int j = 0; j < mat[i].size(); j++){
               if(mat[i][j] == 1){
                   cnt++;
               }
           }

           sqn.push({cnt, i});
       }
        vector<int> ans;
       for(int i = 0; i<k; i++){
           pair<int,int> tmp = sqn.top();
           sqn.pop();
           ans.push_back(tmp.second);
       }

       return ans;
       
    }
};
