#include<stdio.h>
int main()
{
	int a,b,c,sum=0;
	printf("enter the number");
	scanf("%d",&a);
	b=a*a;
	printf("square=%d\n",b);
	while(b)
	{
	c=b%10;
	sum=sum+c;
	b=b/10;
	}
	printf("sum=%d\n",sum);
	
	(a==sum)?printf("neon no"):printf("not neon no");
}
