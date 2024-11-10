#include<stdio.h>
int main()
{
	int a,b;
	char o;
	printf("enter the numbers\n");
	scanf("%d %d",&a,&b);
	printf("enter the operation u want to do");
	scanf(" %c",&o);
	switch(o)
	{
		case '*':printf("multiplication =%d",a*b);break;
		case '+':printf("addition =%d",a+b);break;
		case '-':printf("subtraction =%d",a-b);break;
		case '/':printf("division =%d",a/b);break;
		case '%':printf("modulus=%d",a%b);break;
		default :printf("invalid character");
	}
}

