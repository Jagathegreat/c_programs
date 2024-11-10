#include<stdio.h>\\find the sum of digits of a two digit number
#include<conio.h>
int main()
{   
    int a,b;
	printf("enter a value of a");
	scanf("%d",&a);
	b=(a%10)+(a/10);
	printf("b= %d",b);
	return 0;
}
