#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, r1, r2;

    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter coefficient c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Invalid input! 'a' cannot be zero for a quadratic equation.\n");
    }
    else {
        
        discriminant = b * b - 4 * a * c;

        if (discriminant < 0) {
            printf("The roots are imaginary\n");
        }
        else {

            r1 = (-b + sqrt(discriminant)) / (2 * a);
            r2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Root 1 = %.2f\n", r1);
            printf("Root 2 = %.2f\n", r2);
        }
    }

    return 0;
}
