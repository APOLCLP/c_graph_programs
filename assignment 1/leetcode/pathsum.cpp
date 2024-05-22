class Solution {
public:
    bool check(TreeNode* root, int target,int sum){
        if(root==nullptr)return false;
        sum+=root->val;
        if(root->left==nullptr && root->right==nullptr){
            if(sum==target)return true;
            else return false;
        }

        
        bool left1 = check(root->left,target,sum);
        bool right1 = check(root->right,target,sum);

        return left1||right1;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr){
            //cout<<"hg";
            return false;
        }
       
         return check(root,targetSum,0);
    }
};