class Solution {
public:
bool path(TreeNode* root, int target, int sum){
    if(root==NULL)
    return false;

    sum+=root->val;

    if(root->left==NULL && root->right==NULL)
    if(target==sum)
    return true;

    bool b= path(root->left,target,sum);

    if(b)
    return true;

    return path(root->right,target,sum);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        
        return path(root,targetSum,sum);
    }
};
