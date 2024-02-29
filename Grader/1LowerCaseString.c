#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        char temp[21];
        scanf("%s", temp);

        int check = 1;
        int point = 0;
        while (temp[point] != '\0') {
            if (!islower(temp[point])) {
                check = 0;
                break;
            }
            point++;
        }
        if (check) {
            printf("%s\n", temp);
        }
    }
    return 0;
}
