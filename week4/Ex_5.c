#include <stdio.h>

int main (void){
	int i;
	char x;
	
	scanf("%c %d", &x, &i);
	
	for (int j = 1; j <= i; j++) {
		for (int k = 1; k <= i; k++) {
        	printf("%c", x);
		}
		printf("\n");
	}
	
   	return 0;
}

