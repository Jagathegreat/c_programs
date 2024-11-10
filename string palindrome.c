#include<stdio.h>
int main()
{    int n=0,j,i;
	char a[100];
	printf("enter the string");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	
	for(j=0;j<i/2;j++)	
	if(tolower(a[j])!=tolower(a[i-j-1]))
	{
	printf("not a palindrome");
	return 0;
	}
	printf("palindrome string");
}
