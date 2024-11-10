#include<stdio.h>
int main()
{
	int num,dig;
	printf("enter a two digit number");
	scanf("%d",&num);
	dig=num%10;
	(dig>=5)&&printf("rounding number=%d",(num/10+1)*10)||printf("rounding number=%d",num/10*10);
	
}
