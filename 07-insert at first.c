#include<stdio.h>
int main()
{
  int a[10];
  int i,size,ele;
  //collecting the size position and element
  printf("Enter the size of an array(Max-10)\n");
  scanf("%d",&size);
  printf("Enter an element u want to insert in array\n");
  scanf("%d",&ele);
     for(i=0;i<size;i++) 
	{
     printf("Enter the %d position  value \n",i);
     scanf("%d",&a[i]);
    }
//Shifting
    for(i=size-1;i>=0;i--)
        {
	  a[i+1]=a[i];
        }
//insert now
       a[0]=ele;

//increase size
     size++;
    printf("After inserting one new element we get \n");
       for(i=0;i<size;i++)
       {
       	printf("The %d position value is=%d\n",i,a[i]);
	   }
	return 0;
}

