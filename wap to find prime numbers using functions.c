#include<stdio.h>
#include<stdbool.h>
bool isprime(int n)
{

int i,c=0;
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		c++;
	}
}
if(c==2)
{
	return true;
}
else
{
	return false;
}

	
}
int main()
{ int n;
	printf("enter a number");
	scanf("%d",&n);
 bool a=isprime(n);
 
	(a==true) ? printf("Prime") :printf("Not Prime");
	
	
}
