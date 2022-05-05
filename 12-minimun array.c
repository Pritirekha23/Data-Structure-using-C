#include<stdio.h>
int main()
{
     int a[10],min;
     int i,size;
     
     printf("Enter the size of an array(Max-10)\n");
      scanf("%d",&size);
  
          for(i=0;i<size;i++)
          {
	
             printf("Enter the %d position  value \n",i);
                 scanf("%d",&a[i]);
  
          }

      min=a[0];
      for(i=0;i<size;i++)
      {
      	if(min>a[i])
      	{
      		min=a[i];
        }
	  }

      printf("The min value is %d",min);
	return 0;
}

