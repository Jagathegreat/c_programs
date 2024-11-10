#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the  values of a and b");
	scanf("%d %d",&a,&b);
	printf("before swapping the values are  %d %d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping the values are  %d %d",a,b);
}
