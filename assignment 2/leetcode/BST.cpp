TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr)return root;

        if(root->val==val)return root;

        else if(root->val<val) return searchBST(root->right,val);
        else return searchBST(root->left,val);

        
    }