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
    void inorder(TreeNode* root,vector<int> &v1,int lvl){
        if(!root){
            return;
        }

        if(v1.size()>lvl){
            v1[lvl] += root->val;
        }
        else{
            v1.push_back(root->val);
        }


        inorder(root->left,v1,lvl+1);
        inorder(root->right,v1,lvl+1);

    }
    int maxLevelSum(TreeNode* root) {
        
        vector<int> v1;

        inorder(root,v1,0);
        int index =0;
        int ans = v1[0];
        int size = v1.size();
        for(int i =0; i<size; i++){
            if(ans<v1[i]){
                index = i;
                ans = v1[i];
            }
        }


        return index+1;
    }
};