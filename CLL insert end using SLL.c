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
          void insertEnd(int val);

   void insertBegin(int val)
             {
     	struct node *newNode;
	    newNode=(struct node*)malloc(sizeof(struct node));
	    newNode->data=val;
	
    	if(head==NULL)
       	{
	    newNode->next=newNode;
		head=newNode;
	    }
	   else{
	   	struct node *temp=head;
	   	while(temp->next!=head)
	   	{
	   		temp=temp->next;
		   }
		   temp->next=newNode;
		   newNode->next=head;
	   		head=newNode;
      	}
      	printf("%d Value inserted at begining\n",val);
}

              void insertEnd(int val)
               {
                	struct node *newNode;
			        newNode=(struct node*)malloc(sizeof(struct node));
			        newNode->data=val;
			        
			        //Checking  CLL is empty or not
			        if(head==NULL)
			        {
			           printf("CLL is emprt\n");	
			           
					}
					else{
						struct node *temp=head;
						while(temp->next!=head)
						{
							temp=temp->next;
						}
						temp->next=newNode;
						newNode->next=head;
						
						
					}
		       }
void displaydata()
{
	struct node *temp=head;
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	while(temp!=head);
	}

   int main()
   {
   	
    insertBegin(10);
    insertBegin(20);
    insertEnd(50);
    printf("The values are in CLL using SLL\n");
    displaydata();
	return 0;
   }

