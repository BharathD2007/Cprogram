#include <stdio.h>
int main() {
    
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Smallest number is: %d\n", num2);
    } 
    else if (num2 > num1) {
        printf("Smallest number is: %d\n", num1);
    } 
    else {
        printf("Both numbers are equal.\n");
    }
}
