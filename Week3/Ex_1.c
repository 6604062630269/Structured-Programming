#include <stdio.h>

int main(void) {
    int score;
    scanf("%d", &score);
    if (score >= 40) {
        printf("Congratulations! You ");
        printf("See you next semeter\n");
    } else {
        printf("You are false \n");
        printf("See you again\n");
    }
}
