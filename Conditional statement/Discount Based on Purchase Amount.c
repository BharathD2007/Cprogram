#include <stdio.h>

int main() {
    float amount, finalAmount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount > 10000)
        finalAmount = amount * 0.70;   // 30% discount
    else if (amount > 5000)
        finalAmount = amount * 0.80;   // 20% discount
    else if (amount > 1000)
        finalAmount = amount * 0.90;   // 10% discount
    else
        finalAmount = amount;

    printf("Final amount to pay: ₹%.2f\n", finalAmount);

    return 0;
}
