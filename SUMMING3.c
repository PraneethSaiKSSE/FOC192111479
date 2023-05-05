#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("ENTER THE RANGE: ");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		sum+=i*i;
		
		
	}
	printf("SUM IS %d",sum);
	return 0;
	
}
