#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c>='a'&&c<='z')
	{
		c=c-32;
		printf("%c",c);
	}
	else if(c>='A'&&c<='Z')
	{
		c=c-32;
		printf("%c",c);
	}
	else
	{
		printf("not a alphabet");
	}
}
