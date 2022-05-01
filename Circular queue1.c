//Circular Queue
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int cQueue[SIZE],rear=-1;
int front=-1;

    //prototype
      void  enQueue(int );
      void  deQueue();
      void  display();  
      void isFull();
      void isEmpty();
      
      //enQueue()---means insdertion
       void enQueue(int val)
       {
       	
       	   if((rear==SIZE-1 && front==0) ||(front==rear+1))
       	   {
       	   	  printf("\n Circular queue is full insertion not possible\n");
			  }
			  else {
			  	 if(rear==SIZE-1 && front!=0)
			  	 {
			  	 	rear=-1;
				   }
				   rear++;
				   cQueue[rear]=val;
				   printf("%d inserted successfully\n",val);
				      if(front==-1)
				      front=0;
			  }
	   }
	   // deletion 
	        void deQueue()
	        {
	        	
	        	   if((front==-1 && rear==-1) ||(front==rear+1))
	        	   {
	        	   	  printf("Circular queue is empty deletion not possible\n");
				   }
				   
				     else{
				     	printf("%d deleted successfully\n",cQueue[front]);
				     	front++;
				     	  if(front=rear-1)
				     	  {
				     	  	front=rear=-1;
				     	  	
						   }
						     else
							 {
							 	if(front==SIZE)
							 	{
							 		front=0;
								 }
							 }
					 }
			}
			
			   void display()
			   {
			   	    if(front==-1)
			   	    {
			   	    	printf("Circular queue is empty...nothing is here to display\n");
					   }
					     else {
					     	int i=front;
					     	   printf("Circular queue elements are \n");
					     	     if(front<=rear)
					     	     {
					     	     	 while(i<=rear)
					     	     	     printf("%d\n",cQueue[i++]);
								  }
								  else 
								  {
								  	  while(i<=SIZE-1)
								  	    printf("%d\n",cQueue[i++]);
								  	    i=0;
								  	    while(i<=rear)
								        printf("%d\n",cQueue[i++]);	      
								  }
						 }
			   }
			   
			     void isFull()
			     {
			     	if((rear==SIZE-1 && front==0) ||(front==rear+1))
       	                {
       	   	             printf("\n Circular queue is full\n");
			            }
			            else 
			            {
			            	printf("\n Circular queue is not full\n");
						}
				 }
				 
				  void isEmpty()
				  {
				  	   if((front==-1 && rear==-1) ||(front==rear+1))
	        	   {
	        	   	printf("Circular queue is empty\n");
	        	   }
	        	    else {
	        	    	printf("Circular queue is not empty\n");
					}
	        	   
				  }
int main()
{
      int choice,ele;
      printf("Seelect any one\n");
      while(1)
      {
      	printf("=====CIRCULAR QUEUE=====\n");
      	printf("1.enQueue\n 2.deQueue\n 3.display\n 4.isFull\n 5.iasEmpty\n6.stop\n");
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
      						isFull();
      						break;
      						   case 5:
      						   	 isEmpty();
      						   	   break;
      					
 					     
      					                         	case 6:
      						                        	exit(0);
      						                          	default:
      							                     	printf("PLz choice a valid number\n");
		  }
	  }
	return 0;
}
