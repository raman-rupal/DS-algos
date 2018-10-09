#include<bits/stdc++.h>
using namespace std;
struct node
{
  char data;
  struct node *left;
  struct node *right;
};
node * new_node(char data)
{
    struct node *temp=new node;
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}

void printInorder(struct node *root)
{
    if(root==NULL)
    {
	    return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void printPostorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	printPostorder(root->left);
	printPostorder(root->right);
	cout<<root->data<<" ";

}



