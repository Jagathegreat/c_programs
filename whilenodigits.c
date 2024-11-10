#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("enter the number");
	scanf("%d",&a);//012
	while(a>0||a<=0)
	{
		b=a%10;
		a=a/10;
		c++;
		printf("hi");
		
	}
	
/*	while(a>0||a<0)
	{
		
		b=a%10;
		a=a/10;
		c++;
		
		
	}*/
	printf("%d",c);
}
