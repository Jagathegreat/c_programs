#include <stdio.h>

int foo(int a)
{
    printf("%d", a);
    return 0;
}

int main()
{
    int a;  // Declare a
    printf("Enter a number: ");  // Prompt the user for input
    scanf("%d", &a);  // Read input from the user
    foo(a);  // Pass a to foo
    return 0;
}


