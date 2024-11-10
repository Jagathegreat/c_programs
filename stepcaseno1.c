#include<stdio.h>
int main()
{
	int r1,r2,n;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		r1=n%10;
		n=n/10;
		r2=n%10;
		if(!(r1-r2==1||r2-r1==1))
	{
		printf(" not stepcaseno");
		return 0;
	}
	
		n=n/10;
		
		
		
		
	}
	printf("stepcase no");
	
	
}
