class Solution {
public:
    int count=0;
    void DFS(TreeNode* c , TreeNode* p, TreeNode* g){
        if(!c)
            return;
        if(g && g->val%2==0)
            count+=c->val;
        if(c->left)
            DFS(c->left,c,p);
        if(c->right)
            DFS(c->right,c,p);
        
    }
    int sumEvenGrandparent(TreeNode* root) {
        
       DFS(root,NULL,NULL);
        return count;
        
    }
};