#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
 struct node *fast,*second,*third,*temp;
 fast=(struct node*)malloc(sizeof(struct node));
 second=(struct node*)malloc(sizeof(struct node));
 third=(struct node*)malloc(sizeof(struct node));
 
 //assigning value
 fast->data=10;
 second->data=20;
 third->data=30;
 
 //linking of nodes
 fast->next=second;
 second->next=third;
 third->next=NULL;
 
 //one way of print data part of nodes
// 
// printf("%d\n",fast->data);
// printf("%d\n",second->data);
// printf("%d\n",third->data);

//another way of printing data part of nodes

     temp=fast;
     while(temp!=NULL)
      {
      	printf("%d\t",temp->data);
      	 temp=temp->next;
	  }

	return 0;
}

