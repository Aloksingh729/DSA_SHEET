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
    bool isEvenOddTree(TreeNode* root) {
       queue<TreeNode*> q;

       q.push(root);
       bool evenLevel=true;

       while(!q.empty()){
           int n=q.size();
           int prev;
           if(evenLevel)
           prev=INT_MIN;
           else
           prev=INT_MAX;

           while(n--){
               TreeNode* node=q.front();
               q.pop();

               if(evenLevel && (node->val%2==0 || node->val<=prev)){
                   return false;
               }
                if(!evenLevel && (node->val%2==1 || node->val>=prev)){
                   return false;
               }

               prev=node->val;

               if(node->left){
                   q.push(node->left);
               }
               if(node->right){
                   q.push(node->right);
               }
              
           }
            evenLevel=!evenLevel;
       } 
       return true;
    }
};