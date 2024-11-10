#include<stdio.h>
void main()
{
	long int p;int pwr=1,b;
	printf("enter power and base");
	scanf("%ld %d",&p,&b);
	while(p>0)
	{
		pwr=pwr*b;
		p--;
	}
	printf("%d",pwr);
}
