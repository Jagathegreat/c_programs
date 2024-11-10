#include<stdio.h>
#include<conio.h>
// 
int main()
{
	int a;//56
	printf("enter the two digit no");
	scanf("%d",&a);
	//b=a%10;
	
	
	
	a%10>=5 && printf("%d",((a/10)+1)*10)  || printf("%d",(a/10)*10);
	
	return 0;
}
