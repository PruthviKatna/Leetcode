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
    int sumEvenGrandparent(TreeNode* root) {
        int count=0;
        queue<TreeNode *> q1,q2;
        q1.push(root);
        while(!q1.empty()){
            TreeNode *temp = q1.front();
            q1.pop();
            
            if(temp->val%2==0){
                if(temp->left)
                    q2.push(temp->left);
                if(temp->right)
                    q2.push(temp->right);
            }
            if(temp->left)
                q1.push(temp->left);
            if(temp->right)
                q1.push(temp->right);
        }
        while(!q2.empty()){
            TreeNode *temp = q2.front();
            q2.pop();
            if(temp->left)
                count+=temp->left->val;
            if(temp->right)
                count+=temp->right->val;
        }
        return count;
        
    }
};