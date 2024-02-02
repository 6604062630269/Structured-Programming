#include <stdio.h>

int main(void) {
    int i, j, k, sum = 0;

    for (i = 10; i > 6; i--) {
        for (j = 0; j < i; j++) {
            k = i + j - 5;
            if (k % 3 == 0) {
                sum += k;
            } else if (k % 2 == 0) {
                sum += k * 5;
            }
        }
    }
    printf("%d", sum);
}