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
    bool isLeftEmpty(TreeNode* root)
    {
        return (root->left==nullptr);
    }
    bool isRightEmpty(TreeNode* root)
    {
        return (root->right==nullptr);
    }
    string tree2str(TreeNode* root) {
        string res;
        if (!root)
            return res;
        res+=to_string(root->val);
        if(!isLeftEmpty(root) or !isRightEmpty(root))
            res+= '(' + tree2str(root->left) +')';
        if(!isRightEmpty(root))
            res+='(' + tree2str(root->right) +')';
        return res;
    }
};
