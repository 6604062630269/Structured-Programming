#include <stdio.h>

int len;
int findMax(int num[]);
void addone(int number[], int add[]);
void addtwo(int number[], int pos[], int x);
void addthree(int number[], int pos[2][2]);

int main() {
	int number[5] = {20,50,100,99,9};
	int max;

	max = findMax(number);
	printf("Maximum of these number is %d\n",max);
	
	int x = 5;
	int pos[] = {1,3,5};
	len = 3;
	addtwo(number, pos, x);
	
	int pos2[2][2] = {
		{1,2},
		{2,6}
	};
	len = 2;
	addthree(number, pos2);
	return 0;
}

int findMax(int num[]) {
	int maximum,i=0;
	maximum = num[i];

	for(i=0;i<5;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}
void addone(int number[], int add[]) {
	for (int i=0; i<len; i++) {
		number[i] += add[i];
	}
}
void addtwo(int number[], int pos[], int x) {
	for (int i=0; i<len; i++) {
		number[pos[i]] += x;
	}
}
void addthree(int number[], int pos[2][2]) {
	for (int i=0; i<len; i++) {
		number[pos[i][0]-1] += pos[i][1];
	}
}
