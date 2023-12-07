#include <stdio.h>

int main() {
	int a, b, c, d, max1, max2;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	max1 = a > b ? a : b;
	max1 = max1 > c ? max1 : c;
	max1 = max1 > d ? max1 : d;
	
	max2 = a == max1 ? b : a;
	max2 = max1 > c && c > max2 ? c : max2;
	max2 = max1 > d && d > max2 ? d : max2;
	
	
	printf("max number 2nd is %d ",max2);
}
