#include <stdio.h>

int main (void){
	int i;
	char x;
	
	scanf("%c %d", &x, &i);
	
	for (int j = 1; j <= i; j++)
        	printf("%c", x);
   	return 0;
}
