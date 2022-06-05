#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBegin(int);
void displaydata();
void findMidnode();
int getlen();

void insertBegin(int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	
	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else{
		newNode->next=head;
	   head=newNode;
	}
	printf("%d value node inserted at beginning\n",val );
}
void getMidnode()
     {
     	struct node *slow,*fast;
     	slow=fast=head;
     	if(head==NULL)
     	{
     		printf("Linked list is empty\n");
     		
		 }
		 else{
		 	while(fast!=NULL && fast->next!=NULL)
		 	{
		 		slow=slow->next;
		 		fast=fast->next->next;
			 }
			 printf("Middle node value is %d  \n",slow->data);
		 }
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
   
   insertBegin(50);
   insertBegin(40);
   insertBegin(30);
   insertBegin(20);
   insertBegin(10);
   
   displaydata();
   getMidnode();
   
	return 0;
}

