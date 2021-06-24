//Couldn't solve it this solution from discuss
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
    
    TreeNode* helper(vector<int>& nums ,int first, int last) {
        if(first>last)
            return NULL;
        int max_idx = first;
        for(int i = first ; i<=last ; i++){
            if(nums[i]>nums[max_idx])max_idx=i;
        }
        TreeNode* root = new TreeNode(nums[max_idx]);
        
        root->left = helper(nums,first,max_idx-1);
        root->right = helper(nums,max_idx+1,last);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};