#include<stdio.h>
int main()
{   int a,b,c;
	printf("enter the numbr");
	scanf("%d",&a);
	b=(a/100)*100;
	(99<a && a<1000)&&printf("three digit no")||printf("not a three digit no");
	(99<a && a<1000)&&printf("the multiple of 100 is %d",b);
}
