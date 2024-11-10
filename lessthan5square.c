#include<stdio.h>
int main()
{
	int a;
	printf("enter the no");
	scanf("%d",&a);
	(a%10<5)&&printf("square of the number %d",a*a)||printf("number is %d",a);
}
