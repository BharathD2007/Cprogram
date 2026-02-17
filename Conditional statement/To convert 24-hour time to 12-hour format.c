#include <stdio.h>
int main() {
  
    int hours, minutes;
    char period[3];

    printf("Enter hours (0-23): ");
    scanf("%d", &hours);

    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);

    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        printf("Invalid time entered!\n");
    } 
    else {

        if (hours >= 12) {
            period[0] = 'P';
            period[1] = 'M';
            period[2] = '\0';
        } else {
            period[0] = 'A';
            period[1] = 'M';
            period[2] = '\0';
        }

        if (hours == 0) {
            hours = 12;
        } 
        else if (hours > 12) {
            hours = hours - 12;
        }

        printf("Time in 12-hour format: %02d:%02d %s\n", hours, minutes, period);
    }

    return 0;
}
