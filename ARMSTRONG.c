#include<stdio.h>
int main()
{
	int n,arm=0,rem,temp;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		arm+=rem*rem*rem;
		n/=10;
	}
	if(temp==arm)
	
	
	{
		printf("GIVEN NO IS ARMSTRONG");
	}
	else
	{
		printf("GIVEN NO IS NOT ARMSTRONG");
	}
	return 0;
}
