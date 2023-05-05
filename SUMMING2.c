#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("ENTER THE RANGE: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i*i;
		
		
	}
	printf("SUM IS %d",sum);
	return 0;
	
}
