#include <stdio.h>
int main() {
    float total_score, total_overs;
    float run_rate, percentage;
    printf("Enter total score: ");
    scanf("%f", &total_score);

    printf("Enter total overs played: ");
    scanf("%f", &total_overs);

    if (total_overs <= 0) {
        printf("Overs must be greater than 0.\n");
    } 
    else {
        run_rate = total_score / total_overs;
        percentage = (run_rate / 6) * 100;

        printf("Run Rate: %.2f\n", run_rate);
        printf("Percentage: %.2f%%\n", percentage);

        if (percentage < 50) {
            printf("Prediction: Opponent team can win.\n");
        }
        else if (percentage == 50) {
            printf("Prediction: Both teams have an equal chance of winning.\n");
        }
        else {
            printf("Prediction: Batting team can win.\n");
        }
    }
}
