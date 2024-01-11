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
private: 
    int diff = 0;
    void dfs(TreeNode* root, int mx, int mn){
        if(root == NULL){
            return;
        }
        diff = max(diff, max(abs(mx - root->val), abs(mn - root->val)));
        mx = max(mx, root->val);
        mn = min(mn, root->val);
        dfs(root->left, mx, mn);
        dfs(root->right, mx, mn);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        int mx = root->val;
        int mn = root->val;
        dfs(root,mx,mn);

        return diff;        
    }
};
