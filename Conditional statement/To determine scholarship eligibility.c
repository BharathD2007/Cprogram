#include <stdio.h>
int main() {

    float gpa;
    int extracurricular, technical;

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    printf("Enter number of extracurricular activities: ");
    scanf("%d", &extracurricular);

    printf("Enter number of technical activities: ");
    scanf("%d", &technical);

    if (gpa < 0 || gpa > 4.0 || extracurricular < 0 || technical < 0) {
        printf("Invalid input! Please enter valid values.\n");
    }
    
    else {
     
        if (gpa >= 3.5 && extracurricular >= 3 && technical >= 2) {
            printf("Eligible for the scholarship.\n");
        }
        
        else {
            printf("Not eligible for the scholarship.\n");
        }
    }
}
