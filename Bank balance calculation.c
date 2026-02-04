#include <stdio.h>

int main() {
    int balance, withdraw;
    int remaining;

    scanf("%d %d", &balance, &withdraw);

    if (withdraw > balance) {
        printf("Insufficient Balance");
    } else {
        remaining = balance - withdraw;

        if (remaining < 1000) {
            printf("Low Balance");
        } else {
            printf("Transaction Successful");
        }
    }

    return 0;
}