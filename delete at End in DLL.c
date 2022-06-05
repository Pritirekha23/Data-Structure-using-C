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
       void deleteEnd(int val);
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
           void deleteEnd(int val)
            {
         	
	         
        	struct node *temp=head;
          	while(temp->next!=NULL)
            	{
	        	temp=temp->next;
		
             	}
        	struct node *help=head;
        	while(help->next!=temp)
           	{
	    	help=help->next;
       	}
          help->next=NULL;
          free(temp);

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
      deleteEnd(10);
      printf("After deleting the End node we have\n");
      displaydata();



	return 0;
     }

