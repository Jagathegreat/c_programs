#include<stdio.h>//given costprice=3000,profitpercentage=15%,find sellingprice
#include<conio.h>
#include<math.h>
int main()
{   int sp,cp=3000,p=15;
	sp=cp+(cp*p/100);
	printf("sp= %d",sp);
}
