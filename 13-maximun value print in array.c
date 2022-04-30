#include<stdio.h>
int main()
{
     int a[10],max;
     int i,size;
     
     printf("Enter the size of an array(Max-10)\n");
      scanf("%d",&size);
  
          for(i=0;i<size;i++)
          {
	
             printf("Enter the %d position  value \n",i);
                 scanf("%d",&a[i]);
  
          }

      max=a[0];
      for(i=0;i<size;i++)
      {
      	if(max<a[i+1])
      	{
      		max=a[i+1];
        }
	  }

      printf("The max value is %d",max);
	return 0;
}

