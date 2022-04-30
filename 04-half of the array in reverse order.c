#include<stdio.h>
int main()
{

int mark[10]={78,49,50,86,98,56,88,99,67,90};
     int i=0,mid;
     mid=(0+9)/2;
     printf("half of the array in reverse order::\n");
     for(i=9;i>mid;i--)
       {
	   printf("%d\t",mark[i]);
       }



	return 0;
}

