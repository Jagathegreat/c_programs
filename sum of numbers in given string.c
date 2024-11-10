#include<stdio.h>
int main()
{
	int i,s=0;
	char a[100],b;
	printf("enter 1st string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
	{
		continue;
		}
		else
		{
			s+=a[i]-48;
			}	
	}
	printf("sum =%d",s);
	
/*	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]>='0'&&a[i]<='9')
	      {
		s+=a[i]-48;
			}	
	}
	printf("sum %d",s);*/
	
}
	
