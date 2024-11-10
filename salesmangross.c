#include<stdio.h>
int main()
{
	 int sales,basic,bonus;
	 float da,comm,gross;
	 printf("enter the sales");
	 scanf("%d",&sales);
	 printf("sales=%d\n",sales);
	 if(sales>=200000)
	 {
	 basic=10000;
	 da=65.5*10000/100;
	 bonus=10000;
	 comm=0.1*sales;
	 gross=basic+da+bonus+comm;
	 }
	 else if(sales>=150000)
	 {
	 basic=10000;
	 da=65.5*10000/100;
	 bonus=5000;
	 comm=7.5*sales/100;
	 gross=basic+da+bonus+comm;
	 }
	 else 
	 {
	 basic=10000;
	 da=65.5*10000/100;
	 bonus=2000;
	 comm=0.5*sales/100;
	 gross=basic+da+bonus+comm;
	 }
	
	printf("basic=%d\n",basic);
	printf("bonus=%d\n",bonus);
	printf("da=%.2f\n",da);
	printf("comm=%.2f\n",comm);
	printf("gross=%.2f\n",gross);
}
