#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,*p,*q;
	p=&a;
	q=&b;
	printf("enter two number a and b");
	scanf("%d %d",&a,&b);
	
	printf("the sum is %d",(*p+ *q));
}
