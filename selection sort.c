//Selection sort
#include<stdio.h>
int main()
{
	int a[4]={56,98,4,3},m,n,temp;
	printf("Before sorting\n");
	for(m=0;m<4;m++)
	{
		printf("%d\n",a[m]);
	}
	for(m=0;m<3;m++)
	{
		for(n=m+1;n<4;n++)
		{
			if(a[m]>a[n])
			{
				temp=a[m];
				a[m]=a[n];
				a[n]=temp;
			}
		}
	}
	printf("After sorting\n");
	for(m=0;m<4;m++)
	{
		printf("%d\n",a[m]);
	}
	return 0;
}
