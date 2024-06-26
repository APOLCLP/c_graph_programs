class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr)return 0;

        int l = maxDepth(root->left);
        int r = maxDepth(root->right);

        return 1+(l>r?l:r);
    }
};