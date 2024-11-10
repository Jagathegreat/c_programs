#include<stdio.h>
int main()
{
	int h;
	printf("enter the hour");
	scanf("%d",&h);
	if(h>=4&&h<12)
	{
	printf("good morning");	
	}
	else if(h>=12&&h<16)
	{
		printf("good afternoon");
	}
	else if(h>=16&&h<20)
	{
		printf("good evening");
	}
	else if(h>=20&&h<24&&h>=1&&h<4)
	{
		printf("good night");
	}
	else
	{
		printf("you enter the wrong hours");
	}
	
}
