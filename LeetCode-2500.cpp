class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++){
            sort(grid[i].begin(), grid[i].end() );
        }
        int ans = 0;

        for(int i = grid[0].size()-1; i >=0;i--){
            int t = 0;
            for(int j = 0; j < grid.size(); j++){
                t = max(grid[j][i], t);
            }
            ans+=t;
        }
        return ans;
    }
};
