#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)&&(a>c)&&printf("%d is greatest",a);
	(b>a)&&(b>c)&&printf("%d is greatest",b);
	(c>b)&&(c>a)&&printf("%d is greatest",c);
}
