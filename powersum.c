#include<stdio.h>
void main()
{
	long int p;int pwr=1,b,sum=0;
	printf("enter power and base");
	scanf("%ld %d",&p,&b);
	while(p>0)
	{
		pwr=pwr*b;
		sum=sum+pwr;
		p--;
	}
	printf("%d",sum);
}
