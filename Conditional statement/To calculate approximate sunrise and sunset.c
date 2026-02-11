#include <stdio.h>
int main() {
    int month;
    scanf("%d", &month);
    if(month==1 || month==2 || month==10 || month==11 || month==12){
        printf("Sunrise : 7:00 AM\n");
        printf("Sunset : 5:30 PM");
    }
    else if(month==3){
         printf("Sunrise : 6:30 AM\n");
        printf("Sunset : 6:30 PM");
    }
    else if(month==4 || month==5 || month==6 || month==7 || month==8){
         printf("Sunrise : 5:30 AM\n");
        printf("Sunset : 7:30 PM");
    }
    else{
         printf("Sunrise : 6:30 AM\n");
        printf("Sunset : 6:00 PM");
    }
}
