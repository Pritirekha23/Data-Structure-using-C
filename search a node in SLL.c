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
void search(int);

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
void search(int key)

{
struct node *temp=head;
  while(temp->data=NULL)	
  {
  	if(temp->data==key)
  	{
  	printf("Search success\n");	
   }
   temp=temp->next;
   
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
    displaydata();
   search(30);
   
    displaydata();

	return 0;
}

