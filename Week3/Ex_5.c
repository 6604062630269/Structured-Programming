#include <stdio.h>

int main(void) {
    int month;
    scanf("%d", &month);
    month = month % 12
    if (month <= 2) {
        printf("Winter\n");
    } else if (month <= 5) {
        printf("Spring\n");
    } else if (month <= 8)
        printf("Summer\n");
        printf("Winter in %d month", 12-month)
    } else if (month <= 11)
        printf("Autumn\n");
    }
}
