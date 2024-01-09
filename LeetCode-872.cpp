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
    void dfs(TreeNode* root, vector<int> *v){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            v->push_back(root->val);
        }
        dfs(root->left, v);
        dfs(root->right, v);
    }

public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> rv1 ;
        vector<int> rv2 ;

        dfs(root1,&rv1);
        dfs(root2,&rv2);

        return rv1 == rv2;
        
    }
};




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
    void dfs(TreeNode* root, vector<int> *v){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            v->push_back(root->val);
        }
        dfs(root->left, v);
        dfs(root->right, v);
    }

public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> rv1 ;
        vector<int> rv2 ;

        dfs(root1,&rv1);
        dfs(root2,&rv2);

        if(rv1.size() != rv2.size()){
            return false;
        }

        for(int i =0; i<rv1.size() && i < rv2.size(); i++)
        {
            if(rv1[i] != rv2[i]){
                return false;
            }
        }

        return true;
        
    }
};
