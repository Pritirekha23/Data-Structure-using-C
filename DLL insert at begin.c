#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
 struct node *head=NULL;
   
   //protitype
       void insertBegin(int);
       void displaydata();
       
       
       
       void insertBegin(int val)
         {
   	       struct node *newNode;
			  newNode=(struct node*)malloc(sizeof(struct node));
			  newNode->data=val;
			  
			  //first check the DLL is empty or not
			  if(head==NULL)
			  {
			  	newNode->prev=NULL;
			  	newNode->next=NULL;
			  	head=newNode;
			  }
			  else{
			  	newNode->prev=NULL;
			  	newNode->next=head;
			  	head->prev=newNode;
			  	head=newNode;
			  }
   	    printf("%d inserted at begnning is successful \n",val);
         }
       
     void displaydata()
	 {
	 	struct node *temp=head;
	 	printf("Value in forward direction \n");
	 	while(temp!=NULL)
	 	{
	 		printf("%d\n",temp->data);
	 		temp=temp->next;
		 }
     }  
       
       
     int main()
     {
      insertBegin(10);
      insertBegin(20);
      insertBegin(30);
      
      displaydata();



	return 0;
     }

