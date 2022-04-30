#include<stdio.h>
int main()
{
  int a[10];
  int i,size,pos;
  //collecting the size position and element
  printf("Enter the size of an array(Max-10)\n");
  scanf("%d",&size);
  printf("Enter the position u want to delete an element\n");
  scanf("%d",&pos);
          for(i=0;i<=size;i++)
          {
	
             printf("Enter the %d position  value \n",i);
                 scanf("%d",&a[i]);
  
          }
//Shifting
    for(i=pos;i<size;i++)
        {
	  a[i]=a[i+1];
        }

//decrease size
     size--;
    printf("After deleting  one  element we get \n");
       for(i=0;i<size;i++)
       {
       	printf("The %d position value is=%d\n",i,a[i]);
	   }
	return 0;
}

