#include <stdio.h>

int main() {
    float marks, percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 75)
        printf("Distinction\n");
    else if (percentage >= 60)
        printf("First Class\n");
    else if (percentage >= 50)
        printf("Second Class\n");
    else if (percentage >= 40)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}
