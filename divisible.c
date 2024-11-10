#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two integers");
	scanf("%d %d",&a,&b);
	if(a%b==0)
	{
		printf("a is divisible by b");
	}
	else
	{
		printf("a is not divisible by b");
	}
}

