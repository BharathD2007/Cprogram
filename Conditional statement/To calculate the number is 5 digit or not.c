#include <stdio.h>
int main(){
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0)
        num = -num;

    if(num >= 10000 && num <= 99999)
        printf("It is a 5-digit number.");
    else
        printf("It is Not a 5-digit number.");

    return 0;
}
