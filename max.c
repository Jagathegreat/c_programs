#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbbers");
	scanf("%d%d",&a,&b);
	(a>b)&&printf("max=%d,min=%d",a,b)||printf("max=%d,min=%d",b,a);
}
