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
    void it(TreeNode* root,vector<int>& res)
    {
        if(root!=nullptr)
        {
            it(root->left,res);
            res.push_back(root->val);
            it(root->right,res);
        }
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        it(root,res);
        return res;
    }
};


  