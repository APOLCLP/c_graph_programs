class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> prod;

        if(root == nullptr)return prod;

        
        vector<int> temp1 = inorderTraversal(root->left);
        prod.insert(prod.end(),temp1.begin(),temp1.end());
        prod.push_back(root->val);
        vector<int> temp2 = inorderTraversal(root->right);
        prod.insert(prod.end(),temp2.begin(),temp2.end());

        return prod;
    }
};