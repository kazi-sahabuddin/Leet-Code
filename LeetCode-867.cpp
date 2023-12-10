class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        if(matrix.size() == matrix[0].size()){

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++)
            {
                if(i==j){
                    break;
                } else {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        return matrix;
        } else {

        vector<vector<int>> mat(matrix[0].size());
        for(int i = 0 ; i< matrix[0].size();i++)
        {
            for(int j = 0; j< matrix.size();j++){
                mat[i].push_back(matrix[j][i]);
            }
        }
        return mat;

        }
        
    }
};
