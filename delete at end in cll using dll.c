//Deletion at the end in CLL using dll
#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
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
 		newNode->prev=head;
 		newNode->next=head;
 		
	 }
	 else{
	 	struct node *temp=head;
	 	while(temp->next!=head)
	 	{
	 		temp=temp->next;
	 	
		 }
		 	temp->next=newNode;
	 		newNode->prev=temp;
	 		newNode->next=head;
	 		head->prev=newNode;
	 		head=newNode;
		 
	 }
	 printf("%d delete at end in cll using dll\n",val);
 }
   void display()
{
	struct node *temp=head;
	printf("The values in the circular  linked list are:\n");
do
	{
		printf("%d\n", temp->data);
		temp=temp->next;

	}	while(temp!=head);
}
void delEnd()
{

	if(head==NULL)
	{
		printf("nothing is there in the linked list\n");
	}

	else

	{
		struct node *temp=head;
	   while(temp->next!=head)
	   {
	   	temp=temp->next;
	   }
	   temp->prev->next=head;
	   head->prev=temp->prev;
	   free(temp);
	   temp=NULL;
	   printf("Node at the end deleted\n");
	   

	}

}
int main(){
	insertBeg(10);
	insertBeg(20);
	insertBeg(30);
	display();
	delEnd();
	display();
	return 0;
	}


