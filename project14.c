#include<stdio.h>
#include<conio.h>
int main()
{
	  int cp = 3500;       // Cost price
    int pp = 27;         // Profit percentage
    float vp = 12.7;     // VAT percentage
    float sc = 3.87;     // Service charge percentage
    float sp;            // Selling price
    float profit;        // Profit
    float vat;           // VAT
    float servicecharge; // Service charge
	sp=cp+((pp/100.0)*cp);
	profit=sp-cp;
	vat=(vp/100.0)*sp;
	servicecharge=(sc/100.0)*sp;
	printf("sp is %.2f\n profit is  %.2f \nvat is %.2f\n servicecharge is  %.2f",sp,profit,vat,servicecharge);
	
}
