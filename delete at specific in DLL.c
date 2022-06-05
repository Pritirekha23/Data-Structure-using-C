#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
 struct node *head=NULL;
   
   //prototype
       void insertBegin(int);
       void deleteSpecific(int pos,int val);
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
           
void deleteSpecific(int pos ,int val)
{
	struct node *temp=head;
	   if(head==NULL)
	   {
	   	printf("DLL is empty deletion not possible\n");
	   }

	   	int i=0;
	   	for(i=0;i<pos;i++)
	   	{
	   		temp=temp->next;
		   }
		   temp->prev->next=temp->next;
		   temp->next->prev=temp->prev;
		   free(temp);
		   printf("%d deleted at any specified %d is success \n",pos,val);
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
      insertBegin(40);
      insertBegin(50);
	  
       displaydata();

     printf("After delete at specified position \n");
     deleteSpecific(3,20);
     displaydata();

	return 0;
     }

