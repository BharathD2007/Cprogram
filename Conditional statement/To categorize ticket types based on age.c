#include <stdio.h>
int main() {
    int age;
    int result;

    printf("Enter age: ");

    result = scanf("%d", &age);

    if (result != 1) {
        printf("Invalid input! Please enter a valid integer age.\n");
    }
    else if (age < 0) {
        printf("Invalid input! Age cannot be negative.\n");
    }
    else {
        
        if (age <= 12) {
            printf("Child Ticket (Eligible for discount)\n");
        }
        
        else {
            printf("Regular Ticket\n");
        }
    }
}
