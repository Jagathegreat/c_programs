/*Input the number (Table to be calculated) : 15

Expected Output :

15 X 1 = 15

...

...

15 X 10 = 150=====*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the table number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
