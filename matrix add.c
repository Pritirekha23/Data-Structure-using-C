#include<stdio.h>
int main()
{
  int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
  int b[3][3]={{10,20,30},{40,50,60},{70,80,90}};
 int c[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",c[i][j]);
    			}
    			printf("\n");
	}
	return 0;
}

