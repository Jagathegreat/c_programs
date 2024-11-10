#include<stdio.h>\\swapping by using third variable
#include<conio.h>
int main()
{   int a,b,temp;
	printf("enter two values a and b\n");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	
	printf("the new value of a is %d, and b is %d",a,b);
}
