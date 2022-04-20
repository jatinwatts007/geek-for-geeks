#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
};
 
TreeNode* newNode(int data);
 

TreeNode* BST(int *arr,int start, int end)
{
    if (start > end)
    return NULL;
    int mid = (start + end)/2;
    TreeNode *root = newNode(arr[mid]);
    root->left = BST(arr, start,
                                    mid - 1);
    root->right = BST(arr, mid + 1, end);
 
    return root;
}
 

TreeNode* newNode(int data)
{
    TreeNode* node = new TreeNode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return node;
}

void inOrder(TreeNode* node)
{
    if (node == NULL)
        return;
    
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}
 

int main()
{
    int n;
    cin>>n;
    int * arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    TreeNode *root = BST(arr, 0, n-1);
    inOrder(root);
 
    return 0;
}
