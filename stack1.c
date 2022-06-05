#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE],top=-1;
//prototypes
 void push(int);
 void pop();
 void display();
 void peek();
 //insertion
    void push(int val)
    {
 	 if(top==SIZE-1)
 	 {
 	 	printf("stack is full insertion not possible\n");
	  }
	  else {
	  	top++;
	  	stack[top]=val;
	  	printf("%d is inserted successfully\n",val);
	  }
    }
        //deletion
          void pop()
          {
          	if(top==-1)
          	{
          		printf("stack is empty deletion not possible\n");
			  }
			  else{
			  	printf("%d is deleted successfully\n",stack[top]);
			  	top--;
			  }
		  }
		  
		   //display
		    void display()
		    {
		    	if(top==-1)
		    	{
		    		printf("Nothing is here to print stack is empty\n");
				}
				else
				{
					printf("Elements are\n");
					int i;
					for(i=top;i>=0;i--)
					{
						printf("%d\n",stack[i]);
					}
				}
			}
			
			//peek(print the top element of stack)
			void peek()
			{
				if(top==-1)
				{
					printf("Nothing is here to print stack is empty\n");
				}
				else{
			  	printf("%d the top element is\n",stack[top]);
				}
			}
int main()
{
  int choice,ele;
   printf("select any one\n");
   
    while(1)
    {
    	printf("_____-_____-----______STACK STOPRY______-_______-----______");
    	printf("1.push\n 2.pop\n 3.display\n 4.peek\n 5.stop\n\n");
    	scanf("%d",&choice);
    	switch(choice){
    	case 1:
    		printf("\nEnter the element u want to insert in to the stack\n");
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
    			 	 	 		printf("Invalid choice plz choice again\n");
	                  }
	
		}
	return 0;
}

