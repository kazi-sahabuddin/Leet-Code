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
    vector<int> ans;
    void dfs(TreeNode* root){
        if(root == NULL)
            return;
        if(root->left != NULL)
        {
            dfs(root->left);
        }
        ans.push_back(root->val);
        if(root->right != NULL)
        {
            dfs(root->right);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {

        dfs(root);
        return ans;
        
    }
};
