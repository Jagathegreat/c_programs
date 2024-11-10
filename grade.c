#include<stdio.h>
int main()
{
	int a,b,c,d,e,avg;
	printf("enter the  marks for 5 sub");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	if(avg>=90)
	{printf("grade A");
	}
   else if(avg>=80)
	{printf("grade B");
	}
	else if(avg>=70)
	{printf("grade C");
	}
	else if(avg>=50)
	{printf("grade D");
	}
	else
	{printf("grade F");
	}
	
}
