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
void insertSpecific(int val,int pos);

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

void insertSpecific(int val,int pos)
{
	struct node *newNode,*temp=head;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	newNode->next=NULL;
	//traversing
	while(temp->data!=20)
	{
		temp=temp->next;
		pos--;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	printf(" %d inserted at any specified value success \n",val);
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

//	int i,n,pos,data;
//	printf("Enter the number of nodes\n");
//	scanf("%d",&n);
//	printf("Enter the data for nodes\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&data);
//		insertBegin(data);
//	}
//	printf("Enter the data you want to store between nodes\n");
//	scanf("%d",&data);
//	printf("Enter the position\n");
//	scanf("%d",&pos);
//	if(pos>n){
//		printf("Enter a valid position");
		
	
   insertBegin(40);
   insertBegin(30);
   insertBegin(20);
   insertBegin(10);
   printf("\n values are\n");
   displaydata();
   printf("After inserted at position 2\n");
   insertSpecific(333,2);
   
//insertSpecific(data,pos);
   displaydata();
	return 0;
}

