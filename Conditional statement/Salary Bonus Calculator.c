#include <stdio.h>

int main() {
    float salary, bonus;

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    if (salary >= 50000)
        bonus = salary * 0.20;
    else if (salary >= 30000)
        bonus = salary * 0.10;
    else
        bonus = salary * 0.05;

    printf("Bonus amount: ₹%.2f\n", bonus);

    return 0;
}
