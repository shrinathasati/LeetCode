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
    vector<int> values;
    void dfs(TreeNode* root){
        if(root==NULL){
            return;
        }
        values.push_back(root->val);
        dfs(root->left);
        dfs(root->right);

    }
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        sort(values.begin(),values.end());
        int min_diff=INT_MAX;
        for(int i=1;i<values.size();i++){
            min_diff=min(min_diff,values[i]-values[i-1]);
        }
        return min_diff;
    }
};
