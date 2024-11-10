#include<stdio.h>
int main()
{
	int n,r1,r2;
	printf("enter the number");
	scanf("%d",&n);
		r1=n%10;
		n=n/10;
	while(n!=0)
	{
		r2=n%10;
		if(r2-r1==1||r1-r2==1)
		{
			r1=r2;
		}
		else
		{
			puts("not a stepcase no");
			return 0;
		}
		n=n/10;
	}
	printf("step case no");
}
