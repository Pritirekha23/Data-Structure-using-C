#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
//prototype
void insertBegin(int);
void displaydata();
void deleteSpecific(int val);

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

void deleteSpecific(int val)
{
	struct node *temp=head,*help=head;
	while(temp->data!=30)
	{
		temp=temp->next;
		
	}
	
	help->next=temp->next;
	
	temp->next=NULL;
	free(temp);
	
	printf(" deleted at any specified value success \n",val);
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
   printf("\n values are\n");
   displaydata();
   printf("After delete at specified value\n");
   deleteSpecific(30);
   

   displaydata();
	return 0;
}

