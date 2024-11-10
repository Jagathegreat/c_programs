#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	printf("enter a three digit number");
	scanf("%d",&n);
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
	rem=n%10;
	sum=sum*10+rem;
	printf("%d",sum);
}
