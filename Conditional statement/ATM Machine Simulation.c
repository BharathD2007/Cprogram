#include <stdio.h>
int main() {

    int enteredPIN, correctPIN = 1234;
    float balance, withdrawal;

    printf("Enter PIN: ");
    scanf("%d", &enteredPIN);

    if (enteredPIN != correctPIN) {
        printf("Incorrect PIN. Access Blocked.\n");
    } 
    else {
        printf("Enter Account Balance: ");
        scanf("%f", &balance);

        printf("Enter Withdrawal Amount: ");
        scanf("%f", &withdrawal);

        if (withdrawal > 25000) {
            printf("Warning: Withdrawal amount exceeds ₹25,000.\n");
        }

        if (balance < withdrawal) {
            printf("Insufficient Funds.\n");
        }
        else if ((balance - withdrawal) < 1000) {
            printf("Minimum balance of ₹1000 must be maintained.\n");
        }
        else {
            balance = balance - withdrawal;
            printf("Withdrawal Successful.\n");
            printf("Remaining Balance: ₹%.2f\n", balance);
        }
    }
}
