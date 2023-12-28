#include <stdio.h>

int main(void) {
    int score;
    scanf("%d", &score);
    if (score > 69) {
        if  (score < 75) {
            printf("C\n");
        } else if (score < 85) {
            printf("B\n");
        } else {
            printf("A\n");
        }
    } else if (score > 54) {
        printf("D\n");
    } else {
        printf("F\n");
    }
    if (score < 85) {
        printf("Need %d Score For Grade 'A'", 85-score);
    }
    return 0;
}
