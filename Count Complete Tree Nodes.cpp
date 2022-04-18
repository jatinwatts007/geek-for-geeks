class Solution {
public:
    int count;
    int countNodes(TreeNode* root) {
        
        if(root==nullptr)
            return 0;
        count=1+countNodes(root->left)+countNodes(root->right);
        return count;
    }
};
