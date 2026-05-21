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
    vector<int> rightSideView(TreeNode* root) {
       vector<int> res;
       queue<TreeNode* >q;
       q.push(root);

       while(!q.empty()){
        TreeNode* rightside=NULL;
        int qlen=q.size();

        for(int i=0;i<qlen;i++){
            TreeNode* curr=q.front();
            q.pop();
            if(curr){
                rightside=curr;
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        if(rightside){
            res.push_back(rightside->val);
        }
       } 
       return res;
    }
};
