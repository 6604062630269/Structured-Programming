#include <stdio.h>

int main() {
	float price=0, temp;
	printf("Enter 1st price : ");
	scanf("%f", &temp);
	price += temp;
	printf("Your Price (-5%) : %.2f\n==========\n", price*0.95);
	
	printf("Enter 2nd price : ");
	scanf("%f", &temp);
	price += temp;
	printf("Your Price (-15%) : %.2f\n==========\n", price*0.85);
	
	printf("Enter 3rd price : ");
	scanf("%f", &temp);
	price += temp;
	printf("Your Price (-30%) : %.2f\n==========\n", price*0.70);
	
}
