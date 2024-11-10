#include<stdio.h>
int main()
{
	
	char s[100];
	char *p=s;
	int i,c=0;
	printf("enter the string");
	scanf("%s",s);
	for(i=0;p[i]!='\0';i++)
	{
	c++;	
	}
	printf("%d",c);
}
