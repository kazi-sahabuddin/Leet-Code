class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> rowOne(m,0);
        vector<int> rowZero(m,0);
        vector<int> colOne(n,0);
        vector<int> colZero(n,0);

        for(int row=0;row<m;row++){
            for(int col =0;col<n; col++){
                if(grid[row][col]==1){
                    rowOne[row]++;
                    colOne[col]++;
                }
                if(grid[row][col]==0){
                    rowZero[row]++;
                    colZero[col]++;
                }
            }
        }

        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                grid[row][col]=rowOne[row]+colOne[col]-rowZero[row]-colZero[col];
            }
        }

        return grid;
        
    }
};
