# include <stdio.h>

int main(void) {
	int n1, n2, n3, n4;
	int max = 0;		// range 0 - inf
	
	scanf("%d/%d/%d/%d", &n1, &n2, &n3, &n4);
	
	//	num % 2 = 0  |  0 = False
	if (!(n1%2) && n1 > max) {
		max = n1;
	}
	if (!(n2%2) && n2 > max) {
		max = n2;
	}
	if (!(n3%2) && n3 > max) {
		max = n3;
	}
	if (!(n4%2) && n4 > max) {
		max = n4;
	}
	
	//	check 0(default) or not
	if (max) {
		printf("%d", max);
	} else {
		printf("no");
	}
	
	return 0;
}
