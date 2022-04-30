#include<stdio.h>
int main()
{
  int a[5]={10,33,55,90,66};
  int key=10,i=0,found;
    for(i=0;i<=5;i++)
    {
    	if(a[i]==key)
    	found =1;
    	break;
	}
	if(found==1)
	{
		printf("congratulations yarr :):):):) u r search  is success\n");
	}
	else{
		
		printf("sry! search unsuccess\n");
	}
	return 0;
}

