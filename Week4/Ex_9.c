#include <stdio.h>

int main() {
    int score, i;
    int num_A = 0, num_B = 0, num_C = 0, num_D = 0, num_F = 0;
    while (1) {
        scanf("%d", & score);
        if (score == -1) {
            break;
        }
        if (score > 67) {
            if (score >= 85) {
                printf("%d(A)\n", score);
                num_A += 1;
            } else if (score >= 75) {
                printf("%d(B)\n", score);
                num_B += 1;
            } else {
                printf("%d(C)\n", score);
                num_C += 1;
            }
        } else if (score >= 55) {
            printf("%d(D)\n", score);
            num_D += 1;
        } else {
            printf("%d(F)\n", score);
            num_F += 1;
        }
    }
    printf("A(%d)\n", num_A);
    printf("B(%d)\n", num_B);
    printf("C(%d)\n", num_C);
    printf("D(%d)\n", num_D);
    printf("F(%d)\n", num_F);

    return 0;
}