#include<stdio.h>
int main()
{
	int n,rev,sum=0,temp;
	scanf("%d",&n);
	temp=n;
	for(;n!=0;n=n/10)
	{rev=n%10;
		sum=sum*10+rev;
		
	}
	
	printf("%d",sum);
	(temp==sum)?printf("palindrome"):printf("not");
}
