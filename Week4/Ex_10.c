#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i < 5; i++) {
        int j = 0;
        while (j < i) {
            printf("*");
            j += 1;
        }
        printf("\n");
    }
}