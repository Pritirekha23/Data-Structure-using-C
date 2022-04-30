//SIMPLE QUEUE
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Queue[SIZE],front=-1,rear=-1;
//prototype
  void enQueue(int);
  void deQueue();
  void display();
  void peek();
  void isFull();
  void isEmpty();
  //insertion
   void enQueue(int val)
   {
   	if(rear==SIZE-1)
   	{
   		printf("queue is full insertion not possible \n:");
	   }
	   else{
	   	front=0;
	   	rear++;
	   	Queue[rear]=val;
	   	printf("%d is inserted successfully\n",val);
	   }
   }
   
   //deletion
    void deQueue()
    {
    	if(rear==-1)
    	{
    		printf("Queue is empty deletion not possible\n");
		}
		else {
			printf("%d is deleted successfully\n",Queue[front]);
			front++;
		}
		
	}
	
	//display
	void  display()
	{
		if(rear==-1)
		{
			printf("nothing is here to print\n");
		}
		else{
			int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",Queue[i]);
		}	
		}
	}
	
	//print the top element
	
	void peek()
	{
		if(front==-1)
		{
			printf("nothing in the top to print\n");
		}
		else {
			printf("%d\n",Queue[front]);
		}
	}
	void isFull()
	{
		if(rear==SIZE-1)
		{
			printf("Queue is full\n ");
		}
		else
		{
			printf("Queue is not full\n");
		}
	}
  void isEmpty()
  {
  	if(rear==-1)
  	{
  		printf("Queue is empty\n");
	  }
	  else {
	  	printf("Queue is not empty\n");
	  }
  }
int main()
{
      int choice,ele;
      printf("Seelect any one\n");
      while(1)
      {
      	printf("=====SIMPLE QUEUE=====\n");
      	printf("1.enQueue\n 2.deQueue\n 3.display\n 4.peek\n 5.isFull\n 6.isEmty\n 7.stop\n");
      	scanf("%d",&choice);
      	switch(choice)
      	{
      		case 1:
      			printf("Enter the element u want to insert in to queue\n");
      			scanf("%d",&ele);
      			enQueue(ele);
      			break;
      			case 2:
      				deQueue();
      				break;
      				case 3:
      					display();
      					break;
      					case 4:
      						peek();
      						break;
      						   case 5:
      						   	   isFull();
      						   	      break;
      						   	          case 6:
      						   	          	  isEmpty();
      						   	          	   break;
      					                         	case 7:
      						                        	exit(0);
      						                          	default:
      							                     	printf("PLz choice a valid number\n");
		  }
	  }
	return 0;
}

