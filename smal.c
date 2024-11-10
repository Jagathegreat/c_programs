#include<stdio.h>
int main()
{
	int a;
	printf("enter the  integers");
	scanf("%d",&a);
	if(a%10<5)
	{
		printf("square=%d",a*a);
	}
	else
	{
		printf("number=%d",a);
	}
}
