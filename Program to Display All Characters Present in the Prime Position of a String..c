#include<stdio.h>
int main()
{
	int i,j,c=0;
	char a[100],b;
	printf("enter 1st string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=1,c=0;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			printf("%c",a[i]);
		}
	}
}
