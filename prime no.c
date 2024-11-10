#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("enter the numbeer");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c++;
		}
		
	}
	(c==1)?printf("composite no"):printf("prime no");
}
