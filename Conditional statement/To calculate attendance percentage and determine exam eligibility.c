#include <stdio.h>
int main() {

    float attendedHours, totalHours, percentage;

    printf("Enter total class hours held: ");
    scanf("%f", &totalHours);

    printf("Enter total hours attended: ");
    scanf("%f", &attendedHours);

    if (totalHours <= 0 || attendedHours < 0 || attendedHours > totalHours) {
        printf("Invalid input! Please enter valid hours.\n");
    }
    
    else {
 
        percentage = (attendedHours / totalHours) * 100;
        printf("Attendance Percentage: %.2f%%\n", percentage);

        if (percentage >= 75) {
            printf("Eligible to sit for the exam.\n");
        }
        else if (percentage >= 66 && percentage < 75) {
            printf("Must apply for condonation.\n");
        }
        else {
            printf("Not eligible to sit for the exam.\n");
        }
    }
}
