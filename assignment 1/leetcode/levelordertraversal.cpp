vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> lvl;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* parent = q.front();
                lvl.push_back(parent->val);
                q.pop();

               if(parent->left)q.push(parent->left);
               if(parent->right)q.push(parent->right);


            }
            ans.push_back(lvl);

        }
        return ans;
    }