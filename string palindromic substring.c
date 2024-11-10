#include<stdio.h>
int main()
{    int n=0,j,i,c=0;
	char a[100];
	printf("enter the string");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	int len =i;
	int x=len;
	for(i=0;i<len/2;i++)
	{
		int k=--x;
		int check=1;
		for(j=i;j<x/2;j++,k--)
		{
			if(a[j]!=a[k])
			check=0;		
		}
		if(check)
		{
			for(j=i;j<=x;j++)
			{
				printf("%c",a[j]);		
			}
			c++;
			printf("\n");
		}
}
printf("%d",c);
}
