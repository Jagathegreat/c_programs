#include<stdio.h>
void main()
{
	long int n;int r;
	printf("enter n value");
	scanf("%ld",&n);
	if(n<0)
	printf("-",n=-n);
	do
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	while(n!=0);
}
