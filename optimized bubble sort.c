//optimized bubble sort
#include<stdio.h>
int main()
{
 int a[5]={1,6,3,4,5},m,n,temp,check;
    printf("Before sorting\n");
    for(m=0;m<5;m++)
    {
    	printf("%d\n",a[m]);
	}
	for(m=0;m<4;m++)
	{
		check=0;
		for(n=0;n<4-m;n++)
		{
			if(a[n]>a[n+1])
			{
			 temp=a[n];
			 a[n]=a[n+1];
			 a[n+1]=temp;
			 check=1;	
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

