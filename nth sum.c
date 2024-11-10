#include<stdio.h>
int main()
{
	int n,s=0,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("the first %d natural numbers ",n);
	for(i=1;i<=n;i++)
	{ 
	printf("%d",i);
		s=s+i;
	}
	printf("\n");
	printf("sum of natural numbers");
	printf("%d\n",s);
	
}
