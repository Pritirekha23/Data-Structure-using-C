#include<stdio.h>
#include<stdlib.h> 

   struct node{
   	int key;
   	struct node *left;
   	struct node *right;
   };
    struct node *root=NULL;
   struct node *getNewNode(int val)
   {
   	struct node *newNode=malloc(sizeof(struct node));
   	newNode->key=val;
   	newNode->left=NULL;
   	newNode->right=NULL;
   	 return newNode;
   }
   //inserting node
      struct node *insert(struct node *root,int val)
      {
      	if(root==NULL)
      	 return getNewNode(val);
      	 
      	  else if(root->key<val)
      	   root->right=insert(root->right,val);
      	   
      	    
      	  else if(root->key>val)
      	   root->left=insert(root->left,val);
      	   
      	    return root;
	  }
	 // display
	  void inorder(struct node *root)
	  {
	  	if(root==NULL)
	  	 return;
	  	 
	  	  inorder(root->left);
	  	  printf("%d\n",root->key);
	  	  inorder(root->right);
	  	  
	  }
	  //searching a node
	  int search(struct node *root,int val)
	  {
	  	 if(root==NULL)
	  	  return 0;
	  	   
	  	    else if(root->key==val)
	  	     return 1;
	  	      
	  	      if(root->key<val)
	  	       return search(root->right,val);
	  	          if(root->key>val)
	  	       return search(root->left,val);
	  	       
	  }
	  //deletion
	  struct node *removeNode(struct node *root,int val)
	  {
	  	
	  	if(root==NULL)
	  	return NULL;
	  	
	  	   else if(root->key<val)
	  	   root->right=removeNode(root->right,val);
	  	   
	  	     else if(root->key>val)
	  	      root->left=removeNode(root->left,val);
	  	      
	  	      //3 cases for deletion
	  	       else{
	  	      	//no child
	  	      	   if(root->left==NULL && root->right==NULL)
					  {
					  
	  	      	  free(root);
	  	      	  return NULL;
	  	             }
	  	      	    // right child
	  	      	   else if(root->left==NULL)
					   {
					   
	  	      	    struct node *temp=root->right;
	  	      	    free(root);
	  	      	    return temp;
	  	               }
	  	      	    //left child
	  	      	     else if(root->right==NULL)
						 {	 
	  	      	      struct node *temp=root->left;
	  	      	      free(root);
	  	      	      return temp;
	  	      	  }
				}
	  }
      int main()
    {
      root=insert(root,100);
      root=insert(root,50);
      root=insert(root,200);
      root=insert(root,150);
      root=insert(root,300);
      printf("values are\n");
      inorder(root);
      int d;
      d=search(root,50);
      if(d==1)
      {
      	printf("your search is success\n");
      	
	  }
	  else {
	  	printf("search is not success\n");
	  }
      printf("Before deleting 150\n");
       inorder(root);
       printf("After deleting 150\n");


     removeNode(root,150);
       inorder(root);
	return 0;
     }



