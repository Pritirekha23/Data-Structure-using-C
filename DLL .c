#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
  struct node *head=NULL;
int main()
{
	//variable creation
   struct node *first,*middle,*last,*head;
  
   //allocation of memory
   
   first=(struct node*)malloc(sizeof(struct node));
   middle=(struct node*)malloc(sizeof(struct node));
   last=(struct node*)malloc(sizeof(struct node));
   
   //assigning of each node
   first->data=10;
   middle->data=20;
   last->data=30;
   
   //linking of ecah node
   
   first->prev=NULL;
   first->next=middle;
   
   middle->prev=first;
   middle->next=last;
   
   last->prev=middle;
   last->next=NULL;
  
  //printf in forward direction
    
    struct node *temp=first;
    printf("Forward direction\n");
    while(temp!=NULL)
    {
    	printf("%d\n",temp->data);
    	temp=temp->next;
	}
	
  //printf in backword direction
    
    temp=last;
    printf("Backword direction\n");
    while(temp!=NULL)
    {
    	printf("%d\n",temp->data);
    	temp=temp->prev;
	}
     
	return 0;
}

