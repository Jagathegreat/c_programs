#include<stdio.h>
int main()
{
	float amount,balance;
	char ch;
	printf("enter the balance\n");
	scanf("%f",&balance);
	
	printf("enter operation u want to do\n");
	scanf(" %c",&ch);
	if(balance>=2000)
	{
	
	switch(ch)
	{
		case 'd':case'D':printf("amount u want to deposit");
		scanf("%f",&amount);
		// 2000>0
		if(amount>0)
		{
			balance=amount+balance;
		 printf("%.2f",balance);
		}else
		{
		//balance=amount+balance;
		printf("invalid deposit");
		
	   }
	   break;
		case 'w':case'W':printf("amount u want to withdraw");
		scanf("%f",&amount);
		if(amount<=0)
		{
			printf("invalid withdrawl");
		}
		else if(amount>balance)
		{
			printf("low balance");
		}
		else
		{
		balance=balance-amount;
		printf("%f",balance);
			
		}
		break;
		default:printf("invalid credentials");
		
	}
}else
{
	printf("minimum balance");
}
	return 0;
	
	
}
