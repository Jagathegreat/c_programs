#include<stdio.h>
#include<conio.h>
// next multiple of 10
int main()
{
	int a;
	printf("enter the two digit no");
	scanf("%d",&a);
	printf("the next multiple of 10 of the no %d %d",a,(a/10+1)*10);
	return 0;
}
