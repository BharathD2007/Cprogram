#include<stdio.h>
int main(){
    int a,b;
    
    scanf("%d %d", &a, &b);
    if(a>0 && b>0){
        printf("The coordinate point lies in First quadrant");
    }
    else if(a<0 && b>0){
        printf("The coordinate point lies in Second quadrant");
    }
    else if(a<0 && b<0){
        printf("The coordinate point lies in Third quadrant");
    }
    else{
        printf("The coordinate point lies in Fourth quadrant");
    }
}
