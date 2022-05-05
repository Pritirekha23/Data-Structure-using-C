#include<stdio.h>
#define V 5
//init function
 void init(int arr[V][V])
 {
    int p,s;
    for(p=0;p<V;p++)
    {
    	for(s=0;s<V;s++)
    	{
    		arr[p][s]=0;
		}
	}

 }	
 //addEdge function
 void addEdge(int arr[V][V],int src,int dst)
 {
 	arr[src][dst]=1;
 	arr[dst][src]=1;
 }
 //removeEdge
 void removeEdge(int arr[V][V],int src,int dst)
 {
 	arr[src][dst]=0;
 	arr[dst][src]=0;
 	printf("Edge is removed  in between %d and %d \n",src,dst);
 }
 //cheack function
 void isExist(int arr[V][V],int src,int dst)
 {
 	if(arr[src][dst]==1)
 	{
 		printf("Edge is existed in between %d and %d\n",src,dst);
	 }
	 else{
	 	printf("Edge is not existed in between %d and %d\n",src,dst);
	 }
 }
	//display function
	void display(int arr[V][V])
	{
	int p,s;
    for(p=0;p<V;p++)
    {
    	for(s=0;s<V;s++)
    	{
    		printf("%d",arr[p][s]);
		}
		printf("\n");
	}	
	}
	
int main()
{
  int adjM[V][V];
  init(adjM);
  display(adjM);
  printf("----------------\n");
  addEdge(adjM,0,1);
  addEdge(adjM,0,2);
  addEdge(adjM,1,3);
  addEdge(adjM,1,4);
  addEdge(adjM,2,3);
  addEdge(adjM,3,4);
  display(adjM);
  isExist(adjM,0,2);
  removeEdge(adjM,0,2);
  display(adjM);
	return 0;
}

