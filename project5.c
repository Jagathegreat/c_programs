//swapping the value not using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" the number is %d and %d",a,b);
}
