#include<stdio.h>

int main() {
    float amount, balance;
    char ch;

    printf("Enter the balance: \n");
    scanf("%f", &balance);  // Use %f for float

    if(balance <= 0) {
        printf("Lower balance\n");
        return 0;  // Exit if the balance is 0 or negative
    }

    printf("Valid balance\n");
    printf("Enter the operation you want to do (D for deposit, W for withdrawal): \n");
    scanf(" %c", &ch);

    switch(ch) {
        case 'd':
        case 'D':
            printf("Amount you want to deposit: ");
            scanf("%f", &amount);
            if(amount <= 0) {
                printf("Invalid deposit\n");
            } else {
                balance = amount + balance;  // Uncommented and updating the balance
                printf("New Balance: %.2f\n", balance);
            }
            break;

        case 'w':
        case 'W':
            printf("Amount you want to withdraw: ");
            scanf("%f", &amount);
            if(amount <= 0) {
                printf("Invalid withdrawal\n");
            } else if(amount > balance) {
                printf("Low balance\n");
            } else {
                balance = balance - amount;  // Uncommented and updating the balance
                printf("New Balance: %.2f\n", balance);
            }
            break;

        default:
            printf("Invalid operation\n");
    }

    return 0;  // Indicating successful execution
}

