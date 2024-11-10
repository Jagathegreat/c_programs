#include<stdio.h>
int main()
{
	int i,j;
	char a[100],b;
	printf("enter 1st string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i]>=65&&a[i]<=90)a[i]+=32;	
		
	}
	
	if(a[0]>='a'&&a[0]<='z')a[0]-=32;
	for(i=1;a[i]!='\0';i++)
	{
		
		if(a[i-1]==' ')a[i]-=32;	
		
	}
	printf("%s",a);
	
}
