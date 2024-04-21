class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL && q!=NULL)
            return false;
        if(p!=NULL && q==NULL)
            return false;
        bool lt=isSameTree(p->left,q->left);
        bool rt=isSameTree(p->right,q->right);
        bool check=p->val==q->val;
        if(lt && rt && check)
            return true;
        return false;
    }
};