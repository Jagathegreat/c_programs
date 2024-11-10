#include<stdio.h>
int main()
{int num,count=0,rem;
	printf("enter a number");
	scanf("%d",&num);
	rem=num%10;
	printf("%d\n",rem);
	while(num>0)
	{
	rem=num%10;
	if(rem>10)
	{
		print("%d",rem);
		break;
	}
	num=num/10;
	count++;
	}
	printf("%d\n",count);
	return 0;
}
