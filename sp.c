#include<stdio.h>
int main()
{
	char ch;
	scanf("%d",&ch);
	if(!(ch>=48&&ch<57||ch>=65&&ch<=90||ch>=97&&ch<=122))
	{
		printf("number is special char");
	}
	else
	{
		printf("not a special char");
	}
} 

