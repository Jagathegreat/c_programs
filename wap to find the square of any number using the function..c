#include<stdio.h>
int square(int n);//declaration

int square(int n)
{   int a;
	a=n*n;
	return a;
	
}
int main()
{int n,result,a;
	printf("enter a number");
	scanf("%d",&n);
	result=square(n);
	printf("%d\n",result);
	printf("%d",square(n));
}
