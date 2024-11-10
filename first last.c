#include<stdio.h>
int main()
{int num,fd;
	printf("enter a number");
	scanf("%d",&num);
	fd=num;
	while(fd<=10)
	{
	fd=fd/10;
	}
	printf("first digit%d",fd);
	return 0;
}
