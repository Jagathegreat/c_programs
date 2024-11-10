#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l1;
	char a[100];
l1=strlen(a);
	printf("enter 1st string");
	gets(a);
	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l1;j++)
		{
			if(a[i]==a[j])
			{
				printf("%c",a[i]);
				return 0;
			}
		}
	}
}
	
