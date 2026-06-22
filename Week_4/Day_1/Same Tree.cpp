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
    bool same(TreeNode*p , TreeNode*q){
        if(p==NULL && q==NULL)
        return true;

        if((p!=NULL && q==NULL)||(p==NULL && q!=NULL))
        return false;

        bool l= same(p->left,q->left);
        bool r= same(p->right,q->right);

       if(l && r && (p->val == q->val))
       return true;

       else
       return false;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return same(p,q);
    }
};
