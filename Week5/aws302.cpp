#include <stdio.h>

void all(int n, int arr[]) {
	for (int i=0; i<n; i++)
		printf(" %d", arr[i]);
}

int main(void) {
	int n;
	scanf("%d", &n);
	
	int think[n+1];
	int news[n+1];
	for (int i=0; i<n; i++)
		scanf("%d", &think[i]);
	for (int i=0; i<n; i++)
		news[i] = 0;
		
	//	==========================================
	
	printf("a)");
	for (int i=0; i<4; i++) {
		printf(" %d", think[i]);
	}
	printf("\n");

	printf("b)");
	for (int i=0; i<n; i++) {
		if (think[i] > think[2])
			printf(" %d", think[i]);
	}
	printf("\n");
	
	printf("c)");
	for (int i=0; i<n; i++) {
		if (think[i] > think[2])
			printf(" %d", i);
	}
	printf("\n");
	
	printf("d)");
	think[n] = think[2] + think[3];
	all(n+1, think);
	printf("\n");
	
	printf("e)");
	think[3] = think[4] - think[2];
	all(n+1, think);
	printf("\n");
	
	printf("f)");
	printf(" %d", think[1] >= think[5] ? 2 : 6);
	printf("\n");
	
	printf("g)");
	int temp;
	temp = think[1];
	think[1] = think[n];
	think[n] = temp;
	all(n+1, think);
	printf("\n");
	
	printf("h) new=[");
	int ii = 0;
	for (int i=0; i<=n; i++) {
		if (think[i]%2 == 0) {
			news[ii] = think[i];
			ii++;
		}
	}
	for (int i=0; i<ii; i++) {
		if (i)
			printf(" ");
		printf("%d", news[i]);
	}
	printf("]\n");
	
	
	return 0;
}
