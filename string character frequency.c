#include<stdio.h>
int main()
{
	int i,j;
	char a[100];
	int b[256]={0},n;
	printf("enter 1st string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		n=a[i];
		b[n]++;
	}
	for(i=0;i<256;i++)
	{
		if(b[i]!=0)
		{
			printf("%c printed %d times\n",i,b[i]);
		}
	}
}
	
