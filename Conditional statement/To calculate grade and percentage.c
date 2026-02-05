#include <stdio.h>
int main(){
    int tam,eng,mat,sci,sol; 
    float per; 
    scanf("%d%d%d%d%d", &tam, &eng, &mat, &sci, &sol);
    per = (tam+eng+mat+sci+sol) / 5.0;

    printf("Percentage = %.2f\n", per);
    if(per >= 90){
        printf("Grade A");
    }
    else if(per >= 80){
        printf("Grade B");
    }
    else if(per >= 70){
        printf("Grade C");
    }
    else if(per >= 60){
        printf("Grade D");
    }
    else if(per >= 40){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }

}
