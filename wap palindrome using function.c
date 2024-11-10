#include<stdio.h>
#include<stdbool.h>
bool ispalindromstring(char s[100])
{int i,j;
for(i=0;s[i]!='\0';i++);
for(j=0;j<i/2;j++)
  {
	    if(s[j]!=s[i-j-1])
	    {
	    return false;
			
	    }
	}return true;	
}
int main()
{ char s[100];

	printf("enter the string");
	gets(s);
	 bool x=ispalindromstring(s);
	if(x)
	{
		printf("palindrome");
	}
	else
	{
		printf("not paloindrome");
	}
	
	
}
