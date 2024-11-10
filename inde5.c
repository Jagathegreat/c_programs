#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b=2,c;
	c=(a++ + ++b)++ ;
	printf("%d,%d,%d",a,b,c);
}
