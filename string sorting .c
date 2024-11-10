#include<stdio.h>
int main()
{
	char s[100];
	int i,j;
	printf("enter the string");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
		if (s[i]>s[j])
		{
	   char	temp=s[i];
		s[i]=s[j];
		s[j]=temp;
			
			}	
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
		printf("%c",s[i]);
	}
}
