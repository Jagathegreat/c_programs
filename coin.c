#include<stdio.h>
int main()
{
	int a;
	printf("enter the price");
	scanf("%d",&a); 
	
	
	printf("500 notes:%d\n",a/500);
	printf("200 notes:%d\n",(a%500)/200);
	printf("100 notes:%d\n",((a%500)%200)/100);
	printf("50 notes:%d\n",(((a%500)%200)%100)/50);
	printf("20 notes:%d\n",((((a%500)%200)%100)%50)/20);
	printf("10notes:%d\n",(((((a%500)%200)%100)%50)%20)/10);
	printf("5 notes:%d\n",(((((a%500)%200)%100)%50)%20)%10/5);
	
	return 0;
}
