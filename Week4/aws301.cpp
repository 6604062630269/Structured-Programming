#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	int data[n];
	for (int i=0; i<n; i++)
		scanf("%d", &data[i]);
	                                          
	for (int i=n-1; i>=0; i--) {
		printf("%d", data[i]);
		if (i)
			printf(" ");
	}
	
	return 0;
}
