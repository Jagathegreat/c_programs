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
			printf("composite no"); return 0;
		}
		
	}
	printf("prime no");
	
}
