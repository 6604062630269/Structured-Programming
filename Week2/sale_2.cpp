#include <stdio.h>

int main() {
	float price=0, temp, total;
	printf("Enter 1st price : ");
	scanf("%f", &temp);
	price += temp;
	total = price*0.95;
	printf("Your Price (-5%) : %.2f\n==========\n", total*1.07);
	
	printf("Enter 2nd price : ");
	scanf("%f", &temp);
	price += temp;
	total = price*0.85;
	printf("Your Price (-15%) : %.2f\n==========\n", total*1.07);
	
	printf("Enter 3rd price : ");
	scanf("%f", &temp);
	price += temp;
	total = price*0.70;
	printf("Your Price (-30%) : %.2f\n==========\n", total*1.07);
	
}
