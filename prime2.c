#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    
    int c = 0;
    int i;

    // Loop to check divisors of a
    for(i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }

    // Prime number check
    if (c == 2)
    {
        printf("%d is a prime number\n", a);
    }
    else
    {
        printf("%d is not a prime number\n", a);
    }

    return 0;
}

