#include<stdio.h>
int main()
{

int mark[10]={78,49,50,86,98,56,88,99,67,90};
     int i=0;
     printf("After reversing marks are::\n");
     for(i=9;i>=0;i--)
       {
	   printf("%d\t",mark[i]);
       }



	return 0;
}

