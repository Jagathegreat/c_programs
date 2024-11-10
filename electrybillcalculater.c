#include<stdio.h>
#include<conio.h>
int main()
{  int cid;
char name[30];
float prevr,presr,ar,bill;

	printf("enter consumer id");
	scanf(" %d",&cid);
	printf("enter consumer name");
	getchar(); // to consume the leftover newline character
    fgets(name, sizeof(name), stdin);
    
	printf("enter previous reading");
	scanf("%f",&prevr);
	a:
	printf("enter present reading");
	scanf("%f",&presr);
	if(prevr>presr)
	{
	printf("check present reading\a");
	goto a;}
	
	ar=presr-prevr;
	if(ar>1&&ar<=50)
	{
	bill=ar*1.45;	
	}
	else if(ar>50&&ar<=100)
	{
	bill=50*1.45+((ar-50)*2.8);	
	}
	else if(ar>100&&ar<=200)
	{
	bill=50*1.45+50*2.8+((ar-100)*3.05);	
	}
	else if(ar>200&&ar<=300)
	{
	bill=50*1.45+50*2.8+100*3.05+((ar-200)*4.75);	
	}
	else if(ar>300&&ar<=500)
	{
	bill=50*1.45+50*2.8+100*3.05+100*4.75+((ar-300)*6.00);	
	}
	else if(ar>500)
	{
	bill=50*1.45+50*2.8+100*3.05+100*4.75+200*6.00+((ar-500)*6.25);	
	}
	if(ar<50)
	{
		bill=50;
	}
	printf("cid=%d\n",cid);
	printf("name=%s\n",name);
	printf("prevreadin=%.2f\n",prevr);
	printf("presreadin=%.2f\n",presr);
	printf("actual reading=%.2f",ar);
	printf("bill=%.2f\n",bill);
	
	
}
