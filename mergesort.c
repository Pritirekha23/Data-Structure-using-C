//merge sort
#include<stdio.h>
//prototype
void mergeSort(int [],int,int);
void merge(int [],int,int,int);

//body part of mergeSort()
void mergeSort(int a[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		mergeSort(a,start,mid);
		mergeSort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}


//body part of merge()
void merge(int a[],int start,int mid,int end)
{
	int temp[10],p,s,t;
	p=start;
	s=mid+1;
	t=0;
	
	//COMPARING OF TWO SORTED ARRAY 
	while(p<=mid && s<=end)
	{
		if(a[p]<=a[s])
		{
			temp[t]=a[p];
			p++;
			t++;
		}
		else{
			temp[t]=a[s];
			s++;
			t++;
		}
	}
	//PENDING ELEMENT
	while(p<=mid)
	{
		temp[t]=a[p];
		p++;
		t++;
	}
	
	while(s<=end)
	{
		temp[t]=a[s];
		s++;
		t++;
	}
	
	//COPY ALL THE ELEMENT OF TEMP ARRAY AND STORE IN A(ORIGINALARRAY)
	t=0;
	for(p=start;p<=end;p++)
	{
		a[p]=temp[t++];
	}
	
}
int main()
{
 int a[10]={9,8,7,6,5,4,3,2,1,33},p;
 mergeSort(a,0,9);
 for(p=0;p<10;p++)
 {
 	printf("%d    ",a[p]);
 }
	return 0;
}

