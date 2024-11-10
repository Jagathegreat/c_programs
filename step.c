#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		c=a%10;
		
			printf("%d %d\n",b,c);
			printf("%d\n",b-c);
		
}
	if(	b-c==b-c)
		{
			printf("true");
		}
		else 
		{
			printf("false");}
}
