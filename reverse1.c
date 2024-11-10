//reverse logic without java
#include<stdio.h>
int main()
{
	int a,sum=0,rem;
	printf("enter the three digit no");
	scanf("%d",&a);
	rem=a%10;
	sum=sum*10+rem;
	a=a/10;
	rem=a%10;
	sum=sum*10+rem;
	a=a/10;
	rem=a%10;
	sum=sum*10+rem;
	printf("%d",sum);
	
}

