#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("THE FACTORIAL OF GIVEN NUMBER IS %d",fact);
	return 0;
}
