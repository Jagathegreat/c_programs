#include<stdio.h>
int main()
{
	int i,j=0;
	char a[100],c[100],b;
	printf("enter 1st string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	   if(' '!=a[i])
	   {
      	c[j]=a[i];
      	j++;
		}
		
	}
	
	printf("%s",c);
	
}
/*
#include <stdio.h>
#include<string.h>
int main() {
char s1[100],s2[100],s3[100];
char c;
int i,j=0;
printf("enter the string1 name : ");
gets(s1);
for(i=0;s1[i]!='\0';i++) {
    if(s1[i]!=' '){
        s2[j++]=s1[i];
    }
    s2[j]!='\0';
}
printf("%s",s2);
return 0;
}
*/

