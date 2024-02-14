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
    int dfs(TreeNode* root, string num){
        if(root == NULL){
            return 0;
        }
        num+=to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            return stoi(num);
        }
        int lst =  dfs(root->left,num);
        int rst =  dfs(root->right,num);
        return rst+lst;
    }
public:
    int sumNumbers(TreeNode* root) {
        string num="";
        return dfs(root, num);
    }
};
