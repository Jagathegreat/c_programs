#include<stdio.h>
int main()
{
	int a,b,c=0,l1;
	scanf("%d",&a);
l1:{

	b=a%10;
	a=a/10;
	c++;
	
}
goto l1;
break;

printf("%d",c);
}
