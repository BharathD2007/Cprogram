#include <stdio.h>
int main() {
    int power;
    scanf("%d", &power);
    if(power<0){
      
        if(power<=-1 && power>=-16){
            printf("Short Sightedness.\n");
          
                if(power<=-1 && power>=-4){
                    printf("Minimum.");
                }
                else if(power<=-5 && power>=-8){
                    printf("Moderate.");
                }
                else if(power<=-9 && power>=-12){
                    printf("High.");
                }
                else{
                   printf("Chronic.");
                }
          
        }
        else{
            printf("Invalid");
        }
    }

      
    else if(power==0){
        printf("Normal");
    }

      
    else{
      
        if(power>=1 && power<=16){
            printf("Long Sightedness\n");
          
               if(power>=1 && power<=4){
                   printf("Minimum");
               }
               else if(power<=5 && power>=8){
                   printf("Moderate");
               }
               else if(power<=9 && power>=12){
                   printf("High");
               }
               else{
                  printf("High");
               }
          
        }
          
        else{
            printf("Invalid");
        }
      
    }
}
          
