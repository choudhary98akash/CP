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
            return ;
        }

        if(v1.size()>lvl){
            v1[lvl] = root->val;
        }
        else{
            v1.push_back(root->val);
        }

        inorder(root->left,v1,lvl+1);
        inorder(root->right,v1,lvl+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        
        vector<int> v1;

        v1.push_back(root->val);
        inorder(root,v1,0);

        return v1;

    }
};// 10 min yo