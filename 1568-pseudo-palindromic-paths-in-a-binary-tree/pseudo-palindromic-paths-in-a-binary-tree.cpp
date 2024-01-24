class Solution {
public:
     int result=0;
    int solve(TreeNode* root,int count){
        if(root!=NULL){
            count=count^(1<<root->val);

            if(root->left==NULL && root->right==NULL){
                if((count&(count-1))==0){
                    result++;
                }
            }
            solve(root->left,count);
            solve(root->right,count);
        }
        return result;
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        solve(root,0);
       return result;
    }
};