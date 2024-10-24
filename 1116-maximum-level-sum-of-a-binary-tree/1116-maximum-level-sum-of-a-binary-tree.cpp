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
                vector<int>levels;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int level =0;
            for(int i =0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                level = level + curr->val;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }

            }
            levels.push_back(level);
        }
        int maxi = INT_MIN;
        int ind = -1;
        for(int i =0;i<levels.size();i++){
            if(levels[i]>maxi){
                maxi = levels[i];
                ind = i;
            }
        }
        return ind+1;
    }
};