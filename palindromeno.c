#include<stdio.h>
int main()
{
	int a,sum=0,rev,temp,i;
	printf("enter the no");
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
	rev=a%10;
	sum=sum*10+rev;
	a=a/10;
	}
	/*for(temp=a;a != 0;a=a/10)
	{
		rev=a%10;
		sum=sum*10+rev;
	}*/
	(sum==temp)?printf("palindrome no"):printf("not palindrome no");
}
