#include<stdio.h>
#include<stdlib.h>
       struct node{
        	int data;
	        struct node *next;
          };
          struct node newNode;
          struct node *head=NULL;
          //prototype
          void insertBegin(int);

   void insertBegin(int val)
             {
     	struct node *newNode;
	    newNode=(struct node*)malloc(sizeof(struct node));
	    newNode->data=val;
	
    	if(head==NULL)
       	{
       		head=newNode;
     	 newNode->next=head;
		
	    }
	   else{
	   	struct node *temp=head;
	   	while(temp->next!=head)
	   	{
	   		temp=temp->next;
		   }
		   newNode->next=head;
		   temp->next=newNode;
	   		head=newNode;
      	}
      	printf("%d Value inserted at begining\n");
}
void displaydata()
{
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
   int main()
   {
   	
    insertBegin(10);
    insertBegin(20);
    insertBegin(30);
    insertBegin(40);
    printf("The values are in CLL using SLL\n");
    displaydata();
	return 0;
   }

