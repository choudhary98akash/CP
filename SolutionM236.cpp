/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> ans1;
    vector<TreeNode*> ans2;

    void path(TreeNode* root,TreeNode* target,vector<TreeNode*> &v1,bool p){
        if(!root){
            return;
        }

        v1.push_back(root);

        if(root == target){

            if(p){
                ans1 = v1;
            }
            else{
                ans2 = v1;
            }
            v1.pop_back();
            return ;
        }
        path(root->left,target,v1,p);
        path(root->right,target,v1,p);
        v1.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        vector<TreeNode*> v1;

        path(root,p,v1,true);
        path(root,q,v1,false);

        for(auto n : ans1)
            cout<<n->val<<" ";
        cout<<endl;

        for(auto n : ans2)
            cout<<n->val<<" ";
        cout<<endl;

        int size = min(ans1.size(),ans2.size());
        
        TreeNode* temp;
        for( int i =0; i<size; i++){
            if(ans1[i] == ans2[i]){
                temp = ans1[i];
            }
        }

        return temp;
    }
};//solution wiht 10% beter than other