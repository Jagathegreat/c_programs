#include<stdio.h>
int main()
{
	int a,sec,hr,min;
	printf("enter in sec to convert");
	scanf("%d",&a);
	hr=a/3600;
	min=(a%3600)/60;
	sec=(a%3600)%60;
	printf("hour=%d,min=%d,sec=%d",hr,min,sec);
}
