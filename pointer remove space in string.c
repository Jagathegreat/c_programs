#include<stdio.h>
int main()
{
	
	char s[100];
	char *p=s;
	int i,v=0,c=0;
	printf("enter the string");
	gets(s);
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]=' ')
		{
			p[i+1]=p[i];
		}
	}
for(i=0;p[i]!='\0';i++)
{
	printf("%c",p[i]);
}
}
