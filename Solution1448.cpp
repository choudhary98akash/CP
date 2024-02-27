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
    int counter = 0;
    void traverse (TreeNode* root,vector<int> &v1){
        if(!root){
            return ;
        }
        else{
            v1.push_back(root->val);
            int max = *max_element(v1.begin(),v1.end());
            if(max <= root->val){
                counter++;
            }
        }

        traverse(root->left,v1);
        traverse(root->right,v1);

        v1.pop_back();
    }
    int goodNodes(TreeNode* root) {
        
        vector<int> v1;
        traverse(root,v1);

        return counter;
    }
};  //->Valid ssolution one try by takein time and space

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
    int counter = 0;
    void traverse (TreeNode* root,int maxTillNow){
        if(!root){
            return ;
        }
        else{
            if(root->val>= maxTillNow){
                counter++;
            }
        }

        maxTillNow = max(maxTillNow,root->val);

        traverse(root->left,maxTillNow);
        traverse(root->right,maxTillNow);
    }
    int goodNodes(TreeNode* root) {
        
        int maxTillNow = root->val;
        traverse(root,maxTillNow);

        return counter;
    }
};//best solution out there