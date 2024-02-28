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
    int mh,value;
    void count(TreeNode* root,int h){
        if (root==NULL) return ;
        if(mh<h){
            mh=h;
            value=root->val;
        }
        count(root->left,h+1);
        count(root->right,h+1);
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        mh=-1,value=0;
        count(root,0);
        return value;
    }
};