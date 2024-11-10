#include<stdio.h>
int main()
{int num;
	int rev=0;
	int org_num;
	printf("enter the number");
	scanf("%d",&num);
	org_num=num;
	while(num>0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	printf("the reverse number is %d",rev);
	if(org_num==rev)
	{
		printf("the number is palindrome number");
	}
	else
	{
		printf("number is not a palindrome number");
	}
}
