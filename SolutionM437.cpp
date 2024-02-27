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
    bool checkSum(vector<int> &v1,int target){
        int result = 0;

        for(auto n : v1){
            result +=n;
        }

        if(result == target){
            return true;
        }
        for(auto n : v1){
            result = result -n;
            if(result == target){
                return true;
            }
        }

        return false;
    }

    void traverse(TreeNode* root,vector<int> &v1,int target){

        if(!root){
            return ;
        }
        else{
            v1.push_back(root->val);
            if(checkSum(v1,target)){
                counter++;
            }

        }

        traverse(root->left,v1,target);
        traverse(root->right,v1,target);


        v1.pop_back();

    }
    int pathSum(TreeNode* root, int targetSum) {
        
        vector<int> v1;
        traverse(root,v1,targetSum);

        return counter;
    }
};