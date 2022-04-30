//Insertion sort
#include<stdio.h>
int main()
{
  int a[5]={56,342,2,3,4},m,n,temp;
  printf("before sorting\n");
  for(m=0;m<5;m++)
  {
  	printf("%d\n",a[m]);
  }
  
  for(m=1;m<5;m++)
  {
  	temp=a[m];
  	for(n=m-1;n>=0 && temp<a[n];n--)
  	{
  		a[n+1]=a[n];
	  }
	  a[n+1]=temp;
  }
  printf("after sorting\n");
  for(m=0;m<5;m++)
  {
  	printf("%d\n",a[m]);
  }
	return 0;
}

