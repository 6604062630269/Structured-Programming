#include <stdio.h>

int main (void){
	int i, ii;
	char x;
	
	scanf("%c %d %d", &x, &i, &ii);
	
	for (int j = 1; j <= ii; j++) {
		for (int k = 1; k <= i; k++) {
        	printf("%c", x);
		}
		printf("\n");
	}
	
   	return 0;
}
