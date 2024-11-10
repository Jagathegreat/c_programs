#include<stdio.h>
int main()
{
	int i,j;
	char a[100],b[100],c[100];
	printf("enter 1st string");
	gets(a);
	printf("enter 2nd string");
	gets(b);
	for(i=0;a[i]!='\0';i++)//first  a '/array copy into c array
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!='\0';j++)//b array copy into c array from last index
	{
		c[i+j]=b[j];
	}
	c[i+j]='\0';//assigning last value of c arrray \0
	printf("the concat sring is %s",c);
	
}
