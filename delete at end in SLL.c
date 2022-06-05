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
void deleteEnd(int);

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
    displaydata();
   deleteEnd(10);
   printf("  After deleting the End node we have\n");
    displaydata();

	return 0;
}


