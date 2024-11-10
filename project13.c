#include<stdio.h>
#include<conio.h>
// 
int main()
{
	int a,b;//123
	printf("enter the three digit no");
	scanf("%d",&a);
    
    b=((((a%10)*10)+ ((a/10)%10))*10)+(a/100);
    printf("%d",b);
    return 0;
}

