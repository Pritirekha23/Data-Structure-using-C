//Deletion at specific in CLL using Dll
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
	 printf("%d inserted successfully at the beginning\n",val);
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
void delSpecific(int loc)
{

	if(head==NULL)
	{
		printf("nothing is there in the linked list\n");
	}

	else if(head->next==head)
	{
		printf("%d deleted successfully\n",head->data);
		free(head);
		head=NULL;
	}
else
	{
		struct node *temp=head;
	  int i;
	  for(i=0;i<loc;i++)
	  {
	  	temp=temp->next;
	  }
	  temp->prev->next=temp->next;
	  temp->next->prev= temp->prev;
	  printf("%d deleted successfully\n",temp->data);
	  free(temp);
	  temp=NULL;


	}

}
int main(){
    insertBeg(10);
   insertBeg(20);
   insertBeg(30);
   insertBeg(40);
   insertBeg(50);
	display();
	delSpecific(2);
	display();
	return 0;
	}
