#include <stdio.h>

int main(void) {
    int score;
    scan("%d", &score);
    if (score >= 40) {
        printf("Congratulations! You ");
        printf("See you next semeter\n");
    }
}
