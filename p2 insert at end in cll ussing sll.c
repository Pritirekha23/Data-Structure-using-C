#include<stdio.h>
#include<stdlib.h>
struct node {
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
	  else{
	  	struct node *temp=head;
	  	while(temp->next!=head)
	  	{
	  		temp=temp->next;
		  }
		  temp->next=newNode;
		  newNode->next=head;
	  }
	  printf("%d value inserted at the end of the CLl using sll\n",val);
  }
  void display()
  {
  	struct node *temp=head;
  	printf("value are in CLLusing DLl\n");
  	do{
  		printf("%d \n",temp->data);
  		temp=temp->next;
	  }
	  while(temp!=head);
  }
int main()
{
insertEnd(30);
insertEnd(40);
insertEnd(50);
insertEnd(60);
insertEnd(70);
insertEnd(80);
display();
	return 0;
}

