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
    int maxLevelSum(TreeNode* root) {
        int max_sum=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        int level=0;
        while(!q.empty()){
            level++;
            int sum_level=0;
            for(int i=q.size();i>0;i--){
                TreeNode* node=q.front();
                q.pop();
                sum_level+=node->val;
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
                
            }
            if(max_sum<sum_level){
                max_sum=sum_level;
                ans=level;
            }
        }

    return ans;
    }
};
