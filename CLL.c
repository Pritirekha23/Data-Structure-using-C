#include<stdio.h>
#include<stdlib.h>
    struct node{
	      int data;
	      struct node *next;
         };
         
       int main()
         {
         	//structure variable creation
       struct node *first,*middle,*last;
       
       //memory allocation
       first=(struct node*)malloc(sizeof(struct node));
       middle=(struct node*)malloc(sizeof(struct node));
       last=(struct node*)malloc(sizeof(struct node));
        
		//assoign value of each nodes
		first->data=10; 
		middle->data=20;
		last->data=30;
      
    //linking of nodes
    
    first->next=middle;
    middle->next=last;
    last->next=first;
    
    struct node *temp=first;
    printf("value in foraward direction\n");
    do
    {
    	pintf("%d\n",temp->data);
    	temp=temp->next;
	}
	while(temp->next!=first);
	    return 0;
         }

