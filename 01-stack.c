#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE],top=-1;

//prototype
  void push(int);
  void pop();
  void display();
  void peek();

//insertion
    void push(int val)
    {
    	if(top==SIZE-1)
    	{
    		printf("Stack is full insertion not possible\n");
		}
		else{
			top++;
			stack[top]=val;
				printf("%d inserted successfully\n",val);

		}
	}
	
	   //deletion
	   void pop()
	   {
	   	if(top==-1)
	   	{
	   		printf("Stack is empty deletion not possible\n");
		   }
		   else{
		   	printf("%d deleted successfully\n",stack[top]);
		   	top--;
		   }
	   }
	   
	          //display
	           void display()
	           {
	           	int i;
	           	if(top==-1)
	           	{
	           		printf("Nothing is here to display\n");
				   }
				   else{
				   	printf("Elements are\n");
				   	for(i=top;i>=0;i--)
				   	{
				   		printf("%d\n",stack[i]);
					   }
				   }
			   }
			   
			   
			         //print top element on stack
			           void peek()
			           {
			           	if(top==-1)
			           	{
			           		printf("Stack is empty there is nothing in the peek\n");
						   }
						   else{
						   	printf("the top element is %d",stack[top]);
						   }
					   }
                                        int main()
                                        {
                                          int ch,ele;
                                          printf("Select any one\n");
                                          while(1)
                                          {
                                          	printf("************STACK STORY*************\n");
                                          	printf("1.push\n 2.pop\n 3.display\n 4.peek\n 5.stop\n");
                                          	scanf("%d",&ch);
                                          	
                                          	switch(ch)
                                          	{
                                          		case 1:
                                          			printf("enter element to push in to the stack\n");
                                          			scanf("%d",&ele);
                                          			push(ele);
                                          			break;
                                          			
                                          			case 2:
                                          				pop();
                                          				break;
                                          				
                                          				case 3:
                                         					display();
                                         					break;
                                         					  case 4:
                                         					  	 peek();
                                         					  	 break;
                                         					        case 5:
                                         					         	exit(0);
                                         					  	        default:
                                         					  		
                                         					  		printf("invalid choice plz choice again a valid numebr\n");
											  }
									}
                                    	return 0;
 }

