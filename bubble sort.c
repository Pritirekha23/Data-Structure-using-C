//Bubble sort
#include<stdio.h>
int main()
{
 int a[5]={8,6,9,4,3},m,n,temp;
    printf("Before sorting\n");
    for(m=0;m<5;m++)
    {
    	printf("%d\n",a[m]);
	}
	for(m=0;m<4;m++)
	{
		for(n=0;n<4-m;n++)
		{
			if(a[n]>a[n+1])
			{
			 temp=a[n];
			 a[n]=a[n+1];
			 a[n+1]=temp;	
			}
		}
	}
	 printf("Before sorting\n");
    for(m=0;m<5;m++)
    {
    	printf("%d\n",a[m]);
	}
	return 0;
}

