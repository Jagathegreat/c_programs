#include<stdio.h>
int main()
{   int a,b,c;
	printf("enter the numbr");
	scanf("%d",&a);
	printf(" the reverse of the number  is %d",a%10);
	b=a/10;
	printf("%d%d",b%10,b/10);
}
