#include<stdio.h>
int main()
{
	int a,rev;
	printf("enter afour digit no");
	scanf("%d",&a);
	rev=(((a%10)*1000)+(a%100)*100)+(((a%1000)*10)+a/1000);
	printf("rev=%d",rev);
	
}
