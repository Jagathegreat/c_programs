#include<stdio.h>
int main()
{
	int a,b,c;
	printf("three sides of the triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a == b && a== c)
	{
		printf("equilateral triangle");
	}
	//else if(a==b||a==c||b==c)
	//{
	//	printf("isosceles trangle");
	//}
	else if(a!=b&&a!=c)
	{
	printf("scalene");	
	}
	
	else
	{
		printf("isosceles triangle");
	}
}
