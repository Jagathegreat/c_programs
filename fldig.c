#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;
    printf("Last digit: %d\n", lastDigit);

    // Find the first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    // Output the first digit
    printf("First digit: %d\n", firstDigit);

    return 0;
}

