#include<stdio.h>
int main()
{
	int unit;
	float bill;
	float totalbill,surcharge;
	printf("enter the unit");
	scanf("%d",&unit);
	{
	if (unit<=50)
	{
		bill=unit*0.50;
	}
	else if(unit<=150)
	{
		bill=50*0.50+((unit-50)*0.75);
	}
	else if(unit<=250)
	{
		bill=50*0.5+100*0.75+((unit-150)*1.20);
	}
	else 
	{
	bill=50*0.5+100*0.75+100*1.20+((unit-250)*1.50);
	}
}
	surcharge=(bill*0.2);
	 totalbill=bill+surcharge;
	printf("total bill %.2f",totalbill);
}
