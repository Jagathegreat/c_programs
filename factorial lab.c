#include<stdio.h>
int main()
{
	int a,f,i;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
