//Insertion at specific position in CLL using SLL


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
		else{
			struct node *temp=head;
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			newNode->next=head;
			temp->next=newNode;
			head=newNode;
		}
		printf("%d value insetred at the beginning\n",val);
	}
void insertSpecific(int val,int loc)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL)
	{
		insertBeg(val);
	}
	else{
		struct node *temp=head;
		while(loc!=1)
		{
			temp=temp->next;
			loc--;
		}
		newNode->next=temp->next;
		temp->next=newNode;
		printf("%d inserted at location %d\n",val,loc);
	}
}
	void display()
	{
		struct node *temp=head;
		printf("The data in the linked list are\n");
      do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}while(temp!=head);
}

	int main()
	{
	insertBeg(90);
	insertBeg(80);
	insertBeg(70);
	insertBeg(60);
//
//		insertSpecific(10,0);
//		insertSpecific(20,1);
		display();
		insertSpecific(30,1);
		display();
		return 0;
}
