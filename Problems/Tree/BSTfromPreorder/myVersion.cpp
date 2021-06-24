//o(n*h) solution n is number of nodes and h is height of tree
class Solution {
public:
    
    void insertToBST(TreeNode* root , int val){
         TreeNode* temp = new TreeNode(val) ,*f=NULL;
        
            while(root){
                f = root;
                if(root->val > val)
                    root = root->left;
                else
                    root= root->right;   
            }
            if(f->val > val)
                f->left = temp;
            else
                f->right = temp;
    }
    TreeNode* bstFromPreorder(vector<int>& v) {
        
        TreeNode* root = new TreeNode(v[0]);
        for(int i =1;i<v.size();i++){
            insertToBST(root,v[i]);
        }
        return root;
    }
};