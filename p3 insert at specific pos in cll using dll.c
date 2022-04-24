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
	void insertSpecific(int val,int pos)
	{
		struct node *newNode;
		newNode=(struct node*)malloc(sizeof(struct node));
		newNode->data=val;
		
		if(head==NULL)
		{
			insertBeg();
		}
		else
		{
			struct node *temp=head;
			while(pos!=1)
			{
				temp=temp->next;
				pos--;
			}
			
			newNode->next=temp->next;	
			temp->next=newNode;
			printf("%d value inserted at the specific position\n",val,pos);
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
    display();
    insertSpecific(666,2);
     display();
     insertSpecific(333,4);
     display();


	return 0;
}

