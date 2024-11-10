#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the numbers\n");
	scanf("%d %d",&a,&b);
	switch(a>b)
	{
		case 1:printf("%d is big",a); break;
		default:printf("%d is big",b); break;
	}
}
