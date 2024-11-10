#include<stdio.h>
int main()
{
 int age;
 char gen,cit,i,I;
 printf("enter the citizenship");
 scanf(" %c",&cit);
 if(cit=='I'||cit=='i')
 {
    printf("Enter your gender: (Male/m or Female/f)");
    scanf(" %c",&gen);
    printf("Enter the age:");
    scanf("%d",&age);
    if((gen=='F'||gen=='f')&&age>=18&&age<=45)
    {
    	printf("Congratulations.. you are eligible to marry....");
	}
	else if((gen=='M'||gen=='m')&&age>=21&&age<=50)
	{
		printf("Congratulations.. you are eligible to marry....");
	}
	else
	{
		printf("You are not eligible to marry...");
	}
 }
 else printf("This eligibility check is only Indians..");
}
