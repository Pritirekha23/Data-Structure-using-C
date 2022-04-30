//Quick sort
#include<stdio.h>
//prototype 
 void quickSort(int [],int ,int);
 int partition(int [],int ,int);
 //body part of quickSort
  void quickSort(int a[],int start,int end)
  {
  	if(start<end)
  	{
  		int pIndex=partition(a,start,end);
  		quickSort(a,start,pIndex-1);
  		quickSort(a,pIndex+1,end);
    }
  }
  
  int partition(int a[],int start,int end)
  {
  	int pivot=a[end],temp;
  	int i=start;
  	int pIndex=start;
  	
  	for(i=start;i<end;i++)
  	{
  		if(a[i]<pivot)
  		{
  			//swap in between pIndex and i
             temp=a[pIndex];
             a[pIndex]=a[i];
             a[i]=temp;
             pIndex++;
		  }
	  }
	  //swap in between pIndex and end(pivot)
	  temp=a[pIndex];
	  a[pIndex]=a[end];
	  a[end]=temp;
	  return pIndex;
  }
int main()
{
 int a[10]={12,11,34,55,23,110,89,999,888,10},i;
 printf("Before sorting\n");
  for(i=0;i<10;i++)
  {
  	 printf("%d ",a[i]);
  }
  quickSort(a,0,9);
  printf("\nAfter sorting\n");
  for(i=0;i<10;i++)
  {
  	 printf("%d ",a[i]);
  }
	return 0;
}

