#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	(a%10>5)&&printf("the rounding number is %d",((a/10)+1)*10)||printf("the rounding number is %d",(a/10)*10);
}
