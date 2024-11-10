#include<stdio.h>
int main()
{
	int hr,min;
	printf("enter in hours");
	printf("enter in minutes");
	scanf("%d %d",&hr,&min);
	if(hr>=1&&hr<12)
	{
	printf("%dhr:%dminAM",hr,min);
    }
    else if(hr>12&&hr<=24)
    {
    	printf("%d:%dPM",hr-12,min);
	}
	else
	{
		printf("not input correct time");
	}
}

	
