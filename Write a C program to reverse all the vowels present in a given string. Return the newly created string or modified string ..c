#include<stdio.h>

	int main()
	{
		char a[100];
		int i,j,temp;
		printf("enter one string");
		gets(a);
		for(i=0;a[i]!='\0';i++);
		int len=i;
		for(j=0,i--;j<len/2;j++)
		{
			if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
			{
				if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
					i--;
					
				}
				else
				{				
				j--;
				i--;
			}
		}
	}
		printf("%s",a);
	
		
	}

