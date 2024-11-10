#include<stdio.h> //adding the value without +sign
#include<conio.h>
int main()
{   
    int a,b,c;
	printf("enter a value of a and b");
	scanf("%d %d",&a,&b);
	c=a-(-b);
	printf("c= %d",c);
	return 0;
}
