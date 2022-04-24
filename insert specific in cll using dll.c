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
	printf("The values in the linked list are:\n");
 do
	{
		printf("%d\n", temp->data);
		temp=temp->next;

	}while(temp!=head);
}
void insertSpecific(int val, int loc)
{
	if(head==NULL)
	{
		insertBeg(val);
	}
	else{
			struct node *newNode,*temp=head;
			newNode=(struct node*)malloc(sizeof(struct node));
			newNode->data=val;
			int i;
	for(i=0;i<loc-1;i++)
	{
		temp=temp->next;
}
	 newNode->next=temp->next;
	 newNode->prev=temp;
	 temp->next->prev=newNode;
	 temp->next=newNode;
	 printf("%d inserted successfully at %d loc\n",val,loc);

	}

	
}
int main()
{
	insertBeg(10);
	insertBeg(20);
	insertBeg(30);
	insertBeg(40);
    display();
    insertSpecific(999,2);
	display();
	return 0;

}
