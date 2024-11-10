#include<stdio.h>
int main()
{
	int a,b,sum=0,rev;
	printf("enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
		rev=a%10;
		sum=sum*10+rev;
		a=a/10;
	}
	while(sum!=0)
	{
    b=sum%10;
    
	if(b==1)
	{ 
	printf("one");
	}
	if(b==2)
	{
		printf("two");
	}
	if(b==3)
	{
		printf("three");
	}
	if(b==4)
	{
		printf("four");
	}
	if(b==5)
	{
		printf("five");
	}
	if(b==6)
	{
		printf("six");
		
	}
	if(b==7)
	{
		printf("seven");
	}
	if(b==8)
	{
		printf("eight");
		
	}
	if (b==9)
	{
		printf("nine");
	}
	if(b==0)
	{
		printf("zero");
	}
	sum=sum/10;
   
    }
}

