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
    int sum = 0;
    void count(TreeNode* root){
        if(root){
            sum+=root->val;
            count(root->left);
            count(root->right);
        }
    }
    void toGst(TreeNode *root){
        if(root){
            toGst(root->left);
            int temp = root->val;
            root->val = sum;
            sum-=temp;
            toGst(root->right);
        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        count(root);
        toGst(root);
        return root;
    }
    
    
};