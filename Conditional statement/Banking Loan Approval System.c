#include <stdio.h>
int main() {
    
    float salary;
    int creditScore, age;
    char existingLoan;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);

    printf("Do you have an existing loan? (Y/N): ");
    scanf(" %c", &existingLoan);

    printf("Enter Age: ");
    scanf("%d", &age);

    if (salary >= 25000 && creditScore >= 700 && age >= 21 && age <= 60 && 
        (existingLoan == 'N' || existingLoan == 'n')) {
        
        printf("Loan Status: Approved\n");
    }
    else if (salary >= 25000 && creditScore >= 700 && age >= 21 && age <= 60) {
        
        printf("Loan Status: Conditionally Approved\n");
    }
    else {
        printf("Loan Status: Rejected\n");
    }

    return 0;
}
