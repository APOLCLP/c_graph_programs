

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> prod;

        if(root == nullptr)return prod;

        
        vector<int> temp1 = postorderTraversal(root->left);
        prod.insert(prod.end(),temp1.begin(),temp1.end());
        
        vector<int> temp2 = postorderTraversal(root->right);
        prod.insert(prod.end(),temp2.begin(),temp2.end());

        prod.push_back(root->val);

        return prod;
    }
};