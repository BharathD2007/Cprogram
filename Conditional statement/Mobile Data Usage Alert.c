#include <stdio.h>

int main() {
    float dataUsed;

    printf("Enter data used (in GB): ");
    scanf("%f", &dataUsed);

    if (dataUsed < 1)
        printf("Low usage\n");
    else if (dataUsed <= 2)
        printf("Moderate usage\n");
    else
        printf("High usage - You may exceed limit!\n");

    return 0;
}
