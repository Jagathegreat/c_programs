#include<stdio.h>
int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
//(a%2==0)&&printf("even")||printf("odd");	
//(a==b)&&printf("equal")||printf("notequal");
(a%5==0)&&(a%11==0)&&printf("divisible by 5 and 11")||printf("not divisible");
}
