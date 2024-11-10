#include<stdio.h>
#include<conio.h>
int main()
{int a,b,temp,c;
	printf("enter the no");
	scanf("%d",&a);
	b=a%10;
	(b>=5)&&printf("the rounding number is%d",a-b+10)||printf("the rounding number is %d",a-b);
}
