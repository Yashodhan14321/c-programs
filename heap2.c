#include<stdio.h>
int n;
void Heapify(int arr[],int i)
{
	int l=2*i;
	int max;
	int r=2*i+1;
	if(l<=n&&arr[l]>arr[i])
		max=l;
	else
		max=i;
	if(r<=n&&arr[r]>arr[max])
		max=r;
	if(max!=i)
	{
		int temp=arr[i];
		arr[i]=arr[max];
		arr[max]=temp;
		Heapify(arr,max);
	}
}
void deleteMax(int arr[])
{
	int max=arr[1];
	arr[1]=arr[n];
	n--;
	Heapify(arr,1);
}
void BuildHeap(int arr[])
{
	for(int i=n/2;i>=1;i--)
	{
		Heapify(arr,i);
	}
}
int main()
{
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	BuildHeap(arr);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	deleteMax(arr);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
}