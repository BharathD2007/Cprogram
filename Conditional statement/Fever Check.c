#include <stdio.h>
int main() {
    int t;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &t);

    if (t <= 0)
        printf("Freezing weather");
    else if (t <= 10)
        printf("Very Cold weather");
    else if (t <= 20)
        printf("Cold weather");
    else if (t <= 30)
        printf("Normal temperature");
    else if (t <= 40)
        printf("Hot");
    else
        printf("Very Hot");

    return 0;
}
