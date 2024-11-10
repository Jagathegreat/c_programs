#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	if("ab"=="Ab")
	{
		printf("equal");
	}
	else
	{
		printf("notequal\n");
	}
	if(strcmp("ab","Ab")==0)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
}
