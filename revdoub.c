#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number");
	scanf("%d",&a);
	while(a!=0)
	{ 
	b=a%100;
	printf("%d ",b);
	a=a/100;	
	}
	/*while(a!=0)
	{
		b=a%10;
		a=a/10;
		c=a%10;
		a=a/10;
		printf("%d%d ",c,b);
	}*/
}
