#include<stdio.h>
int main()
{
	int a,sum=0,i;
	scanf("%d",&a);
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0)
		{
		 sum=sum+i;
		}
	}
	(a==sum)?printf("perfect no"):printf("not perfect no");
	
}
