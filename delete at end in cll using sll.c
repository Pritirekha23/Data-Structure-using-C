//Deletion at the end in CLL using SLL
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBeg(int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL)
	{
		head=newNode;
		newNode->next=head;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		newNode->next=head;
		temp->next=newNode;
		head=newNode;
		
		}
printf("%d inserted successfully in the beginning\n",val);
}
void display(){
struct node *temp=head;
printf("Values in the circular linked list are:\n");
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
void delEnd()
{
	struct node *temp=head,*help=head;
	if(head==NULL)
	{
		printf("Circular LL is empty\n");
	}
	else
	{
	while(temp->next!=head){
		help=temp;
		temp=temp->next;
	}
help->next=head;
free(temp);
temp=NULL;
	}
	printf("Node deleted\n");
}
int main()
{
	insertBeg(10);
	insertBeg(20);
	insertBeg(30);
	insertBeg(40);
	display();
	delEnd();
	display();
	return 0;

}
