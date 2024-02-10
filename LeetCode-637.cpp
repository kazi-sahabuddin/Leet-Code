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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> qu;
        qu.push(root);
        qu.push(NULL);
        long long sum=root->val;
        int cnt=1;
        while(!qu.empty()){
            TreeNode* node = qu.front();
            qu.pop();

            if(node == NULL){
                ans.push_back((double)sum/(double)cnt);
                sum = 0;
                cnt = 0;
                if(!qu.empty()){
                    qu.push(NULL);
                }
            } else {
                sum += node->val;
                cnt++;
                if(node->left){
                    qu.push(node->left);
                }
                if(node->right){
                    qu.push(node->right);
                }
            }
        }
        return ans;
    }
};
