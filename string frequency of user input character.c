#include<stdio.h>
int main()
{
	int i,j;
	char a[100],c;
	int b[256]={0},n;
	printf("enter 1st string");
	gets(a);
	printf("enter the charcter u wnt to find frequency");
	scanf("%c",&c);
	for(i=0;a[i]!='\0';i++)
	{
		n=a[i];
		b[n]++;
	}
	for(i=0;i<256;i++)
	{
		if(i==c)
		{
			printf("%c printed %d times\n",i,b[i]);
		}
	}
}
	
