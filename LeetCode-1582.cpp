//Brute Force

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int ans=0;

        for(int row = 0;row < m ; row++){
            for( int col = 0 ; col < n ; col++){
                if(mat[row][col]==0){
                    continue;
                }

                bool good = true;
                for(int r =0; r< m; r++){
                    if(r!=row && mat[r][col]==1){
                        good = false;
                        break;
                    }
                }

                for(int c =0;c<n; c++){
                    if(c!=col && mat[row][c]==1){
                        good = false;
                        break;
                    }
                }

                if(good){
                    ans++;
                }

            }
        }

        return ans;
        
    }
};


//Precompute the Number of Ones in each Row and Column

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> rowCount(m,0);
        vector<int> colCount(n,0);

        for(int row =0; row < m; row++){
            for(int col=0; col < n; col++){
                if(mat[row][col]==1){
                    rowCount[row]++;
                    colCount[col]++;
                }
            }
        }

        int ans=0;

        for(int row =0;row < m; row++){
            for(int col=0;col<n;col++){
                if(mat[row][col]==1){
                    if(rowCount[row]==1 && colCount[col]==1){
                        ans++;
                    }
                }

            }
        }

        return ans;
        
    }
};



