//spy number is 1412==1*4*1*2==1+4+1+2==8
//sum of digits = product of digits
#include<stdio.h>
int main()
{
	int a,b,sum=0,mul=1;
	printf("enter the number");
	scanf("%d",&a);
	while(a)
	{
		b=a%10;
		sum=sum+b;
		mul=mul*b;
		a=a/10;
		
	}
	printf("%d\n",sum);
	printf("%d\n",mul);
	(sum==mul)?printf("it is a spy no"):printf(" not a spy no");
}
