#include <stdio.h>

int main() {
	char commission[] = "5000.00";
	char percent[] = "0.05";
	int no_of_day = 7;
	
	printf("rate:%7s%%  \n", percent);
	printf("comm  :%7s \n", commission);
	printf("no of day:%ddays\n", no_of_day);
}
