#include <stdio.h>


int main() {
	int x1, x2;
	printf("n1=");
	scanf("%d", &x1);
	printf("n2=");
	scanf("%d", &x2);
	if (x1 > x2) {
		printf("x1 > x2\n");
		printf("%d - %d = %d\n", x1, x2, x1-x2);
	} else {
		printf("x1 < x2\n");
		printf("%d - %d = %d\n", x2, x1, x2-x1);
	}
	return 0;
}
