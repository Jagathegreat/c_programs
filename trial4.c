#include<stdio.h>

int main() {
    int a, f = 1, i, j, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &a);

    for (j = 1; j <= a; j++) {
        f = 1; // Reset factorial for each j
        for (i = 1; i <= j; i++) {
            f = f * i;
        }
        sum = sum + f;
    }

    printf("Sum of factorials from 1 to %d is: %d\n", a, sum);
    return 0;
}

