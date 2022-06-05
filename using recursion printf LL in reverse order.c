#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBegin(int);
void printInRevesre();
void displaydata();

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
void printInRevesre(struct node *head)
{
	if(head==NULL)
	{
		return ;
	}
	else{
		printInRevesre(head->next);
		printf("%d\n",head->data);
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
   printf("Before reversing the LL \n");
   displaydata();
   printf("After reversing the LL will be\n");
   printInRevesre(head);  
	return 0;
}

