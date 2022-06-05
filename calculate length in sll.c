#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBegin(int);
void displaydata();
void length();

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
	printf("%d value inserted at beginning\n",val );
}
void lenght()
{
   struct node *temp=head;
   int count=0;
   while(temp!=NULL)
   {
   	count++;
   	temp=temp->next;
		} 	
		printf(" SLL lenth is %d\n",count);
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
   insertBegin(50);
   insertBegin(60);
   insertBegin(70);
   insertBegin(80);
   displaydata();
   length();
	return 0;
}

