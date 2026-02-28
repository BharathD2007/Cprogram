#include <stdio.h>
int main() {
    
    int month;
    scanf("%d", &month);
    if(month<0 || month>12){
        printf("Invalid month number.");
    }
    else{
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            printf("Number of days : 31");
        }
        else if(month==4 || month==6 || month==9 || month==11){
            printf("Number of days : 30");
        }
        else{
            printf("Number of days : 28");
        }
    }
}
