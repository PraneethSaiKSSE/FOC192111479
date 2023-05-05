#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("Enter range:");
	scanf("%d",&n);
	printf("%d",a);
	printf("%d",b);
	for(i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d",c);
	}
}
