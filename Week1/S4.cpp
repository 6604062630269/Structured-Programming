#include <stdio.h>


int main(void) {
	int x1, x2;
	printf("x1\nx2\n");
	scanf("%d\n%d", &x1, &x2);
	if (x1 > x2) {
		printf("x1 > x2\n");
		printf("%d - %d = %d\n", x1, x2, x1-x2);
	} else {
		printf("x1 < x2\n");
		printf("%d - %d = %d\n", x2, x1, x2-x1);
	}
	return 0;
}
