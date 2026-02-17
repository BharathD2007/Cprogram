#include <stdio.h>
int main() {
    int age;
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age");
    } 
    else if (age <= 12) {
        printf("Category: Children - Ticket Rs.50");
    } 
    else if (age <= 18) {
        printf("Category: Teenager - Ticket Rs.80");
    } 
    else if (age <= 60) {
        printf("Category: Adult - Ticket Rs.120");
    } 
    else {
        printf("Category: Senior - Ticket Rs.70");
    }
}
