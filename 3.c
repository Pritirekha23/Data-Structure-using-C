#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBegin(int);
void displaydata();
int getnthNode(int index);


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
int getnthNode(int index)
{
	struct node *temp=head;
	int i=0;
	while(temp!=NULL)
	{
		if(i==index)
		{
			return temp->data;
//    printf("the elemnt of the 3rd node is %d:\n",temp->data);
		}
		i++;
		temp=temp->next;
			return -1;
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
   insertBegin(60);
   insertBegin(50);
   insertBegin(40);
   insertBegin(30);
   insertBegin(20);
   displaydata();
   getnthNode(3);
	return 0;
}

