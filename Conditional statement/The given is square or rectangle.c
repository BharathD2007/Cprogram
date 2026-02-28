#include <stdio.h>
int main(){
    
    float side1, side2;
    printf("Enter first side: ");
    scanf("%f", &side1);

    printf("Enter second side: ");
    scanf("%f", &side2);

    if(side1 == side2)
        printf("Square");
    else
        printf("Rectangle");

    return 0;
}
