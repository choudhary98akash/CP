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


    void collectLeafs(TreeNode* root, vector<int> &arr){
        if(root == nullptr){
            return ;
        }
        else if(root!= nullptr && root->left == nullptr && root->right == nullptr){
            arr.push_back(root->val);
            return ;
        }

        else{
            collectLeafs(root->left,arr);
            collectLeafs(root->right,arr);
        }

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> arr1;
    vector<int> arr2;
    collectLeafs(root1,arr1);
    collectLeafs(root2,arr2); 

    return arr1==arr2;   
    }
};