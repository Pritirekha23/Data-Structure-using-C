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
       void insertSpecific(int,int);
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
       
       void insertSpecific(int val,int pos)
       {
       	int i;
       	struct node *newNode,*temp=head;
       	newNode=(struct node*)malloc(sizeof(struct node));
       	newNode->data=val;
       	
       	//travesre until position
       	for(i=0;i<pos-1;i++)
       	   {
       		temp=temp->next;
           }
           temp->next->prev=newNode;
           newNode->next=temp->next;
           newNode->prev=temp;
           temp->next=newNode;
           printf("\n %d inserted at %d position successfully\n",val,pos);
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
      insertSpecific(111,2);
      displaydata();



	return 0;
     }

