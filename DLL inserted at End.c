#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
 struct node *head=NULL;
   
   //prititype
       void insertBegin(int);
       void insertEnd(int);
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
   	    printf("%d inserted at End is successful \n",val);
         }
              void insertEnd(int val)
               {
                	struct node *newNode;
			        newNode=(struct node*)malloc(sizeof(struct node));
			        newNode->data=val;
			        
			        //Checking  DLL is empty or not
			        if(head==NULL)
			        {
			           insertBegin(val);	
			           
					}
					else{
						struct node *temp=head;
						while(temp->next!=NULL)
						{
							temp=temp->next;
						}
						temp->next=newNode;
						newNode->prev=temp;
						newNode->next=NULL;
						
					}
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
      
      
      
   insertEnd(10);
   insertEnd(20);
   insertEnd(30);
   insertEnd(40);
   
   displaydata();
   
   


	return 0;
     }

