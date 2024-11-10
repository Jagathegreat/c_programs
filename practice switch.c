#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	if(ch>=97&&ch<=122)
	{
		ch=ch-32;
	}
	if(ch>=65&&ch<=90)
	{
		switch(ch)
		{
			case 'A':case 'E':case 'I':case 'O':case 'U':printf("vowel"); break;
			default : printf("consonant");
		}
	}
	else if(ch>=48&&ch<=57)
	{
		printf("digits");
	}
	else
	{
		printf(" special characters");
	}
}
