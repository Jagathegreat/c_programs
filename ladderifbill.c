#include<stdio.h>
int main()
{
	int age;
	char ch;
	float height,bill=0.0;
	printf("enter the age of the coustmer");
	scanf("%d",&age);
	printf("enter the height of the coustmers in CM");
	scanf(" %f",&height);
	if(age<=3){
		printf("free");
	}
	else if(age>3&&age<=13){
	bill=20;
}
else if(age>13&&age<=65)
{
	bill=100;
}
else if(age>65) {
	bill=50;
}
else
{
	printf("Error");
}
printf("original bill=%.2f",bill);
if(height>180){
	bill+=50;
}
else if(height>120)
{
	bill;
}
else if (height<120)
{
	bill=(bill-bill*0.50);
}
else {
	printf("your height is negative error");
}
printf("Whether the customer has a VIP pass (y or n)\n");
scanf(" %c",&ch);
if(ch=='Y'||ch=='y'){
	bill-=(bill*(0.10));
}
else{
	bill;
}
printf("final bill after adding discounts or charges:%.2f",bill);
}
