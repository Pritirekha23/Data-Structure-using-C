#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertEnd(int);

void insertEnd(int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
		head=newNode;
	else{
		struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;	
	}

    temp->next=newNode;
    
       }
       
printf("%d value node inserted at End\n",val );
   }
void displaydata()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
     insertEnd(10);
     insertEnd(20);
     insertEnd(30);
     insertEnd(40);
     displaydata();
     
	return 0;


}
