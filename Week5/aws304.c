#include <stdio.h>

int main(void) {
    char check[21];
    scanf("%s", & check);

    int count, i, j;
    scanf("%d", & count);

    char exam[21];
    int score[count];
    for (i = 0; i < count; i++) {
        scanf("%s", & exam);
        score[i] = 0;
        for (j = 0; j < 20; j++) {
            if (j >= 18) {
                if (check[j] == exam[j]) {
                    score[i] += 3;
                }
            } else if (j >= 15) {
                if (check[j] == exam[j]) {
                    score[i] += 2;
                }
            } else {
                if (check[j] == exam[j]) {
                    score[i] += 1;
                }
            }
        }
    }
    for (i = 0; i < count; i++) {
        printf("std %d => %d\n", i + 1, score[i]);
    }

    return 0;
}