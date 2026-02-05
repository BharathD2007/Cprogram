#include <stdio.h>
int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){
        printf("The 1st Number is the greatest among three. \n");
    }
    else if (num2 > num1 && num2 > num3){
        printf("The 2nd Number is the greatest among three \n");
    }
    else{
        printf("The 3rd Number is the greatest among three \n");
    }
}
