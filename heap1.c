#include<stdio.h>
int main()
{
	int n;
	int arr[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int c=n/2;
	int e=0;
	for(int i=1;i<=c;i++)
	{
          int l=2*i;
          int r=l+1;
          if(arr[l]>arr[i]||arr[r]>arr[i])
          {
             e=1;
          }
	}
	int max;
	int k;
   if(e==1)
	{
		for(int i=c;i>=1;i--)
		{
			int l=2*i;
			int r=2*i+1;
			if(r<=n)
			{
				if(arr[r]>arr[l])
				{
					max=arr[r];
                    k=r;
				}
				else
				{
					max=arr[l];
					k=l;
				}
			}
			if(arr[i]<max)
			{
				int temp=arr[i];
				arr[i]=arr[k];
				arr[k]=temp;
			}
		}
		for(int j=1;j<=n;j++)
		{
			printf("%d ",arr[j]);
		}
	}
	else if(e==0)
	{
		printf("It is a maxheap");
	}
	return 0;
}