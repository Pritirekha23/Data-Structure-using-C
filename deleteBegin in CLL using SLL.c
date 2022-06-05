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
void deleteBegin(int);

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
void deleteBegin(int val)
{
	struct node *temp=head;
	head=temp->next;
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
   deleteBegin(40);
   printf("  After deleting the 1st node we have\n");
    displaydata();

	return 0;
}

