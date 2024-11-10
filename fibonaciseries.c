//fibonaci series
#include<stdio.h>
int main()
{ int r1,r2,i,n,r3;
	printf("enter the number");
	scanf("%d",&n);
	    r1=0;
		r2=1;
	for(i=1;i<=n;i++)
	{
			printf("%d",r1);
	
		r3=r1+r2;
		r1=r2;
		r2=r3;
		
	
			//printf("%d %d",r1,r2);
	}
	
	
}
