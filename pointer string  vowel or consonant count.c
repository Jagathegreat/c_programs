#include<stdio.h>
int main()
{
	
	char s[100];
	char *p=s;
	int i,v=0,c=0;
	printf("enter the string");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
		s[i]+=32;	
		}
	}
	for(i=0;p[i]!='\0';i++)
	{
		if (p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u')
		{
			v++;
		}
		else
		{
			c++;
		}
	}
	printf("vowel %d ",v);
	printf("consonant %d",c);
}
