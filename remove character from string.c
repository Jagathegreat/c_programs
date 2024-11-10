#include<stdio.h>
int main()
{
	int i,j;
	char a[100],b;
	printf("enter 1st string");
	gets(a);
	printf("enter the character u want to remove");
	scanf("%c",&b);
	for(i=0;a[i]!='\0';i++)
	{
	   if(a[i]==b)
	   {
      	continue;//a[i]=printf("");
		}
		else
		{printf("%c",a[i]);
			}	
	}
	
}
	
