#include <stdio.h>

// Function prototypes
int createaccount();
int depositmoney(int ib);
int withdrawmoney(int ib);
int checkbalance(int ib);
void exit_program();  // Avoid conflict with the C standard library exit()

// Function to create an account
int createaccount() {
    int ib = 2000;  // Initial balance
    printf("Account created successfully with initial balance %d\n", ib);
    return ib;
}

// Function to deposit money
int depositmoney(int ib) {
    int n;
    printf("Enter the amount you want to deposit: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Invalid amount.\n");
    } else {
        ib = ib + n;
        printf("The current balance is %d\n", ib);
    }
    return ib;
}

// Function to withdraw money
int withdrawmoney(int ib) {
    int w;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &w);

    if (w > ib) {
        printf("Insufficient balance.\n");
    } else {
        ib = ib - w;
        printf("The remaining balance is %d\n", ib);
    }
    return ib;
}

// Function to check balance
int checkbalance(int ib) {
    printf("Current balance is %d\n", ib);
    return ib;
}

// Function to exit the program
void exit_program() {
    printf("Exiting...\n");
    exit(0);
}

// Main function
int main() {
    int c;
    int balance = 0;  // Variable to store balance
    
    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                balance = createaccount();
                break;
            case 2:
                balance = depositmoney(balance);
                break;
            case 3:
                balance = withdrawmoney(balance);
                break;
            case 4:
                checkbalance(balance);
                break;
            case 5:
                exit_program();
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

