#include<stdio.h>
int main()
{
	int n,i,sum=0,avg,arr[20];
	printf("ENTER THE SIZE OF NUMBERS:");
	scanf("&d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nSUM OF THE GIVEN NUMBERS IS : ");
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	avg=sum/n;
	printf("\nTHE AVERAGE OF THE GIVEN NUMBERS IS %d ",avg);
	return 0;
	
}
