/*Write a C program to display the sum of n terms of even natural numbers.

#

Test Data :

Input number of terms : 5

Expected Output :

The even numbers are :2 4 6 8 10

The Sum of even Natural Number upto 5 terms : 30*/
#include<stdio.h>
int main()
{
int n,i,sum=0,a=0;
printf("enter the terms");
scanf("%d",&n);
printf("the even no");
for(i=0;i<n;i++)
{ 
	printf("%d ",a=a+2);
	sum=sum+a;
	}
	printf("\n");
	printf("sum: %d",sum);	
}
