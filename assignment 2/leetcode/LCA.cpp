int search(TreeNode* root, TreeNode* p, TreeNode* s){
        if(root==nullptr)return 0;
        queue<TreeNode*> q;
        int l=0;
        q.push(root);

        while(!q.empty()){
            //vector<int> lvl;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* parent = q.front();
                if(parent==p) l++;
                if(parent==s) l++;
                if(l==2) return 2;
                q.pop();

               if(parent->left)q.push(parent->left);
               if(parent->right)q.push(parent->right);


            }
            
            

        }
        return l;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if (root == nullptr || root == p || root == q) return root;
        int fl =search(root->left,p,q);
        
        if(fl==0)return lowestCommonAncestor(root->right,p,q);
        else if(fl==2)return lowestCommonAncestor(root->left,p,q);

        else return root;
    }