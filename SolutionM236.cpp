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


// Best Solution Goes like 
// TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//     if (!root || root == p || root == q) return root;
//     TreeNode* left = lowestCommonAncestor(root->left, p, q);
//     TreeNode* right = lowestCommonAncestor(root->right, p, q);
//     return !left ? right : !right ? left : root;
// }

// //Explaination 
// Same solution in several languages. It's recursive and expands the meaning of the function. If the current (sub)tree contains both p and q, then the function result is their LCA. If only one of them is in that subtree, then the result is that one of them. If neither are in that subtree, the result is null/None/nil.

// Update: I also wrote two iterative solutions now, one of them being a version of the solution here. They're more complicated than this simple recursive solution, but I do find them interesting.