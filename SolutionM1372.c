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
    int func(TreeNode* root,char c,int depth){
        if(!root){
            return depth;
        }

        int l1 =0;
        int l2 =0;
        int l3 =0;
        int R1 =0;
        int R2 =0;
        int R3 =0;

        if(c == 'r'){
            l1 = func(root->left,'L',0);
            R1 = func(root->right,'R',0);

        }
        else if(c == 'L'){
            l2 = func(root->right,'R',depth+1);
            R2 = func(root->left,'L',0);

        }
        else{
            l3 = func(root->left,'L',depth+1);
            R3 = func(root->right,'R',0);
        }

        return max({l1,l2,l3,R1,R2,R3});
    }
    int longestZigZag(TreeNode* root) {
        
        return func(root,'r',0);
    }
};// first try no gap hit bulls eye but takes time