class Solution {
public:
int findpos(vector<int>& inorder, int ele , int n){
    for(int i=0;i<n;i++){
        
    
        if(inorder[i]==ele)
        return i;
}
    return -1;
}
TreeNode* solve(vector<int>&preorder, vector<int>&inorder, int &preorderindex,int inorderstart, int inorderend,int n){
    if(preorderindex >= n || inorderstart > inorderend)
    return NULL;

    int element = preorder[preorderindex++];
    TreeNode* root = new TreeNode(element);
    int position = findpos(inorder, element , n);

root->left= solve(preorder, inorder, preorderindex, inorderstart,position-1,n );
root->right= solve(preorder, inorder, preorderindex,position+1,inorderend ,n);

return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderindex= 0;
        int n = preorder.size();
        TreeNode* ans= solve(preorder,inorder,preorderindex,0,n-1,n);
        return ans;
    }
};
