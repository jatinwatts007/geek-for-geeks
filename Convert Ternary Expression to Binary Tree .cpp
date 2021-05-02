#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;
	
	Node(char x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

void preorder(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
Node *convertExpression(string str,int i);
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		Node *root=convertExpression(str,0);
		preorder(root);
		cout<<endl;
	}
}// } Driver Code Ends


/*Complete the function below
Node is as follows
struct Node{
	char data;
	Node *left,*right;
};
*/
Node *convertExpression(string str,int i)
{
    if(i==str.size()) return NULL;
    struct Node * temp = new Node(str[i++]);
    if(str[i]=='?')
    temp->left=convertExpression(str,i+1);
    if(str[i]==':')
    temp->right=convertExpression(str,i+1);
    
    return temp;
    
//add code here.
}
