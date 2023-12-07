#include <stdio.h>

int main() {
	int a, b, c, d, m1, m2, m3, m4;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	m1 = a > b ? a : b;
	m2 = m1 > c ? m1 : c;
	m3 = m2 < d ? m2 : d;
	
	printf("max number is %d ",m3);
}
