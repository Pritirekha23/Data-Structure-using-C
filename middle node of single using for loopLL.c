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
int getlen()
{
	struct node *temp=head;
	int i=0;
	while(temp!=NULL)
	{
		i++;
		temp=temp->next;
	}
}
void findMidnode()
{
	struct node *temp=head;
	if(head==NULL)
	{
		printf("Linked list is empty\n");
		
	}
	else{
		int length;
		length=getlen();
		int i;
		for(i=0;i<=length/2;i++){
			temp=temp->next;
		}
		printf("Middle Node  value is %d\n",temp->data);
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
   insertBegin(10);
   insertBegin(20);
   insertBegin(30);
   insertBegin(40);
   insertBegin(50);
   displaydata();
   findMidnode();
   
	return 0;
}

