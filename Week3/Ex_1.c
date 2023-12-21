#include <stdio.h>

int main(void) {
    int score;
    scanf("%d", &score);
    if (score >= 29) {
        printf("Congratulations! You ");
        printf("See you next semeter\n");
    } else if (score >= 15) {
        prinf("You can test again!\n")
    } else {
        printf("You are false \n");
        printf("See you again\n");
    }
}
