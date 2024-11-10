#include<stdio.h>
int main()
{
	int i=0;
	abc:
		if(i<=10)
		{
			printf("%d\n",i);
			i++;
			goto abc;
		}
}
