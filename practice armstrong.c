#include<stdio.h>
#include<math.h>
int main()
{
	int r,n=152,c=0,arm,s;
	r=n;
	while(n)
	{
		n=n/10;
		c++;
	}
	
	while(r!=0)
	{ s=r%10;
		arm+=pow(s,c);
		r=r/10;
	}
	printf("%d",arm);
	
}
