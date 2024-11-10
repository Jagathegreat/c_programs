#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the length of three sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c)
	{
		printf("the triangle is valid");
	}
	else if(c+a>b)
	{
		printf("valid");
	}
	else if(b+c>a)
	{ printf("valid");
	}
	else
	{
		printf("not valid");
	}
}
