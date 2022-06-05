//all operation of bst
#include<stdio.h>
#include<stdlib.h>
//node creation
struct node
{
	int key;
	struct node *left;
	struct node *right;    
};
//getting new node
struct node*root=NULL;
struct node *getNewNode(int val)
{
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->key=val;
	newNode->left=NULL;
	newNode->right=NULL;
	
	
	return newNode;
}
//insertion
struct node *insert(struct node *root,int val)
{
	if(root==NULL)
	return getNewNode(val);
	
	if(root->key<val)
	root->right=insert(root->right,val);
	
	 else if(root->key>val)
	root->left=insert(root->left,val);
		
	return root;
}
//searching
int search(struct node *root,int key)
{
	if(root==NULL)
	return 0;
	
	if(root->key==key)
	{
	printf("key is found\n");
	}

	if(root->key<key)
	return search(root->right,key);
	
	if(root->key>key)
	return search(root->left,key);
}
//traversal
void inorder(struct node *root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	printf("%d\n",root->key);
	inorder(root->right);
}
//getting min value node in right sub tree
int getRightMin(struct node *root)
{
	struct node *temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp->key;
}
//deletion
struct node *removeNode(struct node *root,int val)
{
	if(root==NULL)
	return NULL;
	
	if(root->key<val)
	root->right=removeNode(root->right,val);
	
	else	if(root->key>val)
	root->left=removeNode(root->left,val);
	
	else
	{
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}
		else if(root->left==NULL)
		{
			struct node *temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node *temp=root->left;
			free(root);
			return temp;
		}
		else
		{
			int rightmin=getRightMin(root->right);
			root->key=rightmin;
			root->right=removeNode(root->right,rightmin); 
		}
	}
	
	return root;
}

int main()
{
	
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,30);
	root=insert(root,40);
	root=insert(root,2);
	root=insert(root,3);
	root=insert(root,12);
	root=insert(root,6);
	root=insert(root,67);
	root=insert(root,1);
	
	search(root,40);
	
	printf("before deletion\n");
	inorder(root);
	
	root=removeNode(root,5);
	root=removeNode(root,12);
	root=removeNode(root,10);
	
	printf("after deletion\n");
	inorder(root);	
	return 0;
	
}
