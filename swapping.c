#include<stdio.h>
int main()
{
	//swapping using third variable
	int c=20;
	int d=30;
	int temp;
	temp=c;
	c=d;
	d=temp;
	printf("the number after swapping is %d and %d",c,d);
	//swapping not using third variable
	int a=6,b=5;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping the number is %d and %d",a,b);
	
	
}
