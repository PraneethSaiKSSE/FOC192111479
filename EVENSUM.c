#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("ENTER THE RANGE :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	printf("THE SUM OF EVEN NUMBERS IS %d",sum);
	return 0;
}

