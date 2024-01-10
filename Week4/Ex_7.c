#include <stdio.h>

int main() {
    int score, num, i;
    scanf("%d", & num);
    for (i = 1; i <= num; i++) {
        scanf("%d", & score);
        if (score > 67) {
            if (score >= 85) {
                printf("%d(A)\n", score);
            } else if (score >= 75) {
                printf("%d(B)\n", score);
            } else {
                printf("%d(C)\n", score);
            }
        } else if (score >= 55) {
            printf("%d(D)\n", score);
        } else {
            printf("%d(F)\n", score);
        }
    }

    return 0;
}