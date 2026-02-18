#include <stdio.h>
int main() {

    float income, tax = 0, rebate = 0;
    int age;
    char gender;

    printf("Enter Annual Income (in lakhs): ");
    scanf("%f", &income);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);

    if (income <= 2.5) {
        tax = 0;
    }
    else if (income <= 5) {
        tax = income * 0.05;
    }
    else if (income <= 10) {
        tax = income * 0.20;
    }
    else {
        tax = income * 0.30;
    }

    if (age > 60) {
        rebate += tax * 0.05;
    }

    if (gender == 'F' || gender == 'f') {
        rebate += tax * 0.02;
    }

    tax = tax - rebate;

    printf("\nTotal Tax before rebate: %.2f lakhs", tax + rebate);
    printf("\nTotal Rebate: %.2f lakhs", rebate);
    printf("\nFinal Tax to be Paid: %.2f lakhs\n", tax);

    return 0;
}
