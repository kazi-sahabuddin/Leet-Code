/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int> sumArray;
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> qu;
        qu.push(root);
        //sumArray.push_back(root->val);
        qu.push(NULL);
        int sum=0;
        while(!qu.empty()){
            TreeNode* node = qu.front();
            qu.pop();
            

            if(node == NULL){
                if(!qu.empty()){
                    qu.push(NULL);
                }
                    
                sumArray.push_back(sum);
                sum =0;
            } else {
                sum+=node->val;
                if(node->left != NULL){
                    qu.push(node->left);
                }
                if(node->right != NULL ){
                    qu.push(node->right);
                }

            }
            
        }

        return sumArray[sumArray.size()-1];        
    }
};
