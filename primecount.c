//1. 1-n primes and count.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    
    int c = 0,count=0;
    int i;

    // Loop to check divisors of a
    for(i=1;i<=a;i++)
{
	
    for(i = 1; i <= a; i++)
    {
        if (i % i == 0&&i%1==0)
        {
            c++;
        }
      if(c==2)
	  count++;  
    }
}
    // Prime number check
    //(c==2)?printf("prime"):("notprime");
    printf("count=%d",count);
    return 0;
}

