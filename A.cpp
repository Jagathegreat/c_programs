#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the  values of a and b");
	scanf("%d %d",&a,&b);
//	printf("before swapping the values are  %d %d",a,b);
	// 5 7
	// 2
	a=a^b; 
//	printf("%d",a);  2
    	b=a^b;
		printf("%d",b);
	a=a^b;
//	printf("after swapping the values are  %d %d",a,b);
}
