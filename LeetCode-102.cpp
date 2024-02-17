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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        queue<TreeNode*> qu;
        qu.push(root);
        qu.push(NULL);
        vector<int> v;
        while(!qu.empty()){
            
            TreeNode* node = qu.front();
            qu.pop();
            if(node == NULL){
                if(!qu.empty()){
                    qu.push(NULL);
                }
                ans.push_back(v);
                v.clear();

            }else{
                v.push_back(node->val);
                if(node->left != NULL){
                    qu.push(node->left);
                }
                if(node->right != NULL){
                    qu.push(node->right);
                }
            }

        }

        return ans;
    }
};
