#include<stdio.h>
int biggestnumber(int a,int b,int c)
{
   if(a>b && b>c)
    {
	printf("a is greater");
	}
	else if(b<c)
	{
	printf("c is greater");
	}
	else
	{
	printf(" b is greater");
	}	
}
int main()
{
	int a,b,c;
	printf("enter 1st number");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
	printf("enter 3rd number");
	scanf("%d",&c);
	biggestnumber(a,b,c);
	
}
