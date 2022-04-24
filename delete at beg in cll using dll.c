//Deletion at the beginning in CLL using SLL


#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertEnd(int val)
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
		temp->next=newNode;
		newNode->next=head;

	}
	printf("%d value inserted successfully at the end\n",val);
}
void display(){
struct node *temp=head;
printf("Values in the circular linked list are:\n");
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
void delBeg()
{
	struct node *temp=head,*help=head;
	if(head==NULL)
	{
		printf("Circular LL is empty\n");
	}
	else
	{
	while(help->next!=head){
		help=help->next;
	}
help->next=temp->next;
head=temp->next;
free(temp);
temp=NULL;
	}
	printf("Node deleted\n");
}
int main()
{
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	display();
	delBeg();
	display();
	return 0;

}

