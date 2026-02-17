#include <stdio.h>
int main() {

    int accountType;
    float amount;

    printf("Select Account Type:\n");
    printf("1. Regular Account (Limit: $300)\n");
    printf("2. Premium Account (Limit: $500)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &accountType);

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount! Withdrawal amount must be greater than 0.\n");
    }
    else if (accountType == 1) {
        
        if (amount <= 300) {
            printf("Withdrawal successful.\n");
        }
        else {
            printf("Withdrawal limit exceeded! Regular account limit is $300.\n");
        }
    }
    else if (accountType == 2) {
        
        if (amount <= 500) {
            printf("Withdrawal successful.\n");
        }
        else {
            printf("Withdrawal limit exceeded! Premium account limit is $500.\n");
        }
    }
    else {
        printf("Invalid account type selected.\n");
    }

    return 0;
}
