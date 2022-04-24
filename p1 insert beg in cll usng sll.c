//#include<stdio.h>
//#include<stdlib.h>
//struct node{
//	int data;
//	struct node *next;
//};
//struct node *head=NULL;
// 
//  void  insertBeg(int val)
//  {
//  	struct node *newNode;
//  	newNode=(struct node*)malloc(sizeof(struct node));
//  	newNode->data=val;
//     if(head==NULL)
//	 {
//	 	head=newNode;
//	 	newNode->next=head;
//		 }	
//		 else{
//		 	struct node *temp=head;
//		 	while(temp->next!=head)
//		 	 {
//			  temp=temp->next;
//			  }
//			  newNode->next=head;
//			  temp->next=newNode;
//			  head=newNode; 
//		 }
//		 printf("%d insert at begin success in cll using sll\n",val);
//		 
//  }
//  void display()
//		 {
//		 	struct node *temp=head;
//		     printf("Values in CLL using sll \n");
//			 do{
//			 	printf("%d\n",temp->data);
//			 	temp=temp->next;
//			 }	
//			 while(temp!=head);
//		 }
//int main()
//{
// insertBeg(10);
// insertBeg(20);
// insertBeg(30);
// display();
//
//	return 0;
//}





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
	void display()
	{
		struct node *temp=head;
		printf("The values in CLL using SLL are\n");
		do{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		while(temp!=head);
	}
int main()
{
	insertBeg(90);
	insertBeg(80);
	insertBeg(70);
	insertBeg(60);
	insertBeg(50);
	display();
	return 0;
}

