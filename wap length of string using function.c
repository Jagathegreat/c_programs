#include<stdio.h>
int getlength(char c[100])
{
int i;
for(i=0;c[i]!='\0';i++);
return i;	
}
int main()
{   char c[100];
    int d;
	printf("enter the string");
	gets(c);
	d=getlength(c);
	printf("count of the string %d",d);
}
