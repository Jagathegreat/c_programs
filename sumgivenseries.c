//sum of the given series n=5
//1+11+111+1111+11111
/*#include<stdio.h>
int main()
{
	int n,sum=0,num=0,i;
	printf("enter the value");
	scanf("%d",&n);
	for( i=1;i<=n;i++)
		{
		num=(num*10)+1;
		printf("%d",num);
		printf("+");
		sum=sum+num;
		}
		printf("\b  ");
		printf("\nsum:%d",sum);

}*/
#include<stdio.h>
int main()
{
	int n,sum=0,num=0,i;
	printf("enter the value");
	scanf("%d",&n);
	for( i=0;i<n;i++)
		{
		num=(num*10)+1;
		printf("%d",num);
        if(i+1<n)
		printf("+");
		sum=sum+num;
		}
		
		printf("\nsum:%d",sum);

}
