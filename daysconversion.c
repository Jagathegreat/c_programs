#include<stdio.h>
int main()
{
	int a,y,m,w,d;
	printf("enter no of days to convert");
	scanf("%d",&a);
	
	y=a/365;
	m=(a%365)/30;
	w=((a%365)%30)/7;
	d=((a%365)%30)%7;
	printf("the converted format is year=%d,month=%d,week=%d,days=%d",y,m,w,d);
	
}
