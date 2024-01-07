#include <stdio.h>

int main(void) {
    int num1, num2, i, j;
    scanf("%d %d", & num1, & num2);
    int ary[num1 + 1][num2 + 1];

    for (i = 0; i < num1; i++) {
        for (j = 0; j < num2; j++) {
            scanf("%d", & ary[i][j]);
        }
    }
    int plus_row, plus_column;
    for (i = 0; i < num1; i++) {
        plus_row = 0;
        for (j = 0; j < num2; j++) {
            plus_row += ary[i][j];
        }
        ary[i][num2] = plus_row;
    }

    for (i = 0; i < num2 + 1; i++) {
        plus_column = 0;
        for (j = 0; j < num1; j++) {
            plus_column += ary[j][i];
        }
        ary[num1][i] = plus_column;
    }

    for (i = 0; i < num1 + 1; i++) {
        for (j = 0; j < num2 + 1; j++) {
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }
    return 0;
}