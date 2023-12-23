class Solution {
    public: 
        vector < int > findMissingAndRepeatedValues(vector < vector < int >> & grid) {
        int a = -1, b = -1;
        int n = grid.size();
        unordered_map < int, int > umap;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (umap[grid[i][j]] > 0) {
                    a = grid[i][j];
                    break;
                } else {
                    umap[grid[i][j]]++;
                }
            }
        }

        for (int i = 1, j; i <= n * n; i++) {
            for (j = 0; j < n; j++) {
                if ((find(grid[j].begin(), grid[j].end(), i)) != grid[j].end())
                    break;
                else if (j == (n - 1)) {
                    b = i;

                }
            }

        }

        return { a, b };

    }
};

//updated code

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a=-1,b=-1;
        int n = grid.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){               
                umap[grid[i][j]]++;
            }
        }
        
        for(int i=1; i<=n*n;i++)
        {
            if(umap[i]==2)
            {
                a=i;
            }
            if(umap[i]==0)
            {
                b=i;
            }
            
        }
        
        return {a, b};
        
    }
};
