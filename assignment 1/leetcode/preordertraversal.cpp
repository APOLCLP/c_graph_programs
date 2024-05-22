class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> prod;

        if(root == nullptr)return prod;

        prod.push_back(root->val);
        vector<int> temp1 = preorderTraversal(root->left);
        prod.insert(prod.end(),temp1.begin(),temp1.end());
        vector<int> temp2 = preorderTraversal(root->right);
        prod.insert(prod.end(),temp2.begin(),temp2.end());

        return prod;
    }
};