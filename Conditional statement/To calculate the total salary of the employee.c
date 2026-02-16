#include <stdio.h>
int main() {
    char gender;
    float hours, salary = 0;
    float base_rate;
    scanf(" %c", &gender);
    scanf("%f", &hours);
    if (gender == 'M' || gender == 'm') {
        base_rate = 80;
    }
    else if (gender == 'F' || gender == 'f') {
        base_rate = 60;
    }
    else {
        printf("Invalid gender entered.\n");
        return 1;
    }
    if (hours <= 8) {
        salary = hours * base_rate;
    } else {
        salary = (8 * base_rate) + ((hours - 8) * 100);
    }
    printf("Total Salary = Rs. %.2f\n", salary);

    return 0;
}
