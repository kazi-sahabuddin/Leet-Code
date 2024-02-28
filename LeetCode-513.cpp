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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> qu;
        qu.push(root);
        TreeNode* node;

        while(!qu.empty()){
            node = qu.front();
            qu.pop();
            if(node->right != NULL){
                qu.push(node->right);
            }
            if(node->left != NULL){
                qu.push(node->left);
            }
            
        }
        return node->val;
    }
};
