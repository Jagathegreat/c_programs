// wrong
#include<stdio.h>
int main()
{    int n=0,j,i;
int c=0;
	char a[100],b[100];
	printf("enter the 1st string");
	gets(a);
	printf("enter the 2nd string");
	gets(b);
 
	int len=strlen(a);
	int len1=strlen(b);
	if(len!=len1)
	{
		printf("not anagram ");return 0;
	}
	
	for(i=0;i<len;i++){
	for(j=0;j<len1;j++)
	{
 
	if(a[i]==b[j])	
	{     c++;
       	break;
	}
	}
  }
  if(c==i)
  {
  	printf("angram string");
  }
  else
  {
  	printf("not angram string");
  
}}
