#include <stdio.h>
int checkscore(char std[]);
int charkeys[10] = {'D','B','D','C','C','D','A','E','A','D'};

int main() {
    int i;
    char ans[8][10]={
        {'A','B','A','C','C','D','E','E','A','D'},//7
		{'D','B','A','B','C','A','E','E','A','D'},//6
		{'E','D','D','A','C','B','E','E','A','D'},//5
		{'C','B','A','E','D','C','E','E','A','D'},//4
		{'A','B','D','C','C','D','E','E','A','D'},//8
		{'B','B','E','C','C','D','E','E','A','D'},//7
		{'B','B','A','C','C','D','E','E','A','D'},//7
		{'E','B','E','C','C','D','E','E','A','D'}
	};//7

	
	for (int i=0; i<8; i++) {
		printf("std %d => %d\n", (i+1), checkscore(ans[i]));
	}
    
    return 0;
}

int checkscore(char std[]) {
	int score = 0;
	for (int i=0; i<10; i++) {
		if (std[i] == charkeys[i]) {
			score++;
		}
	}
	return score++;
}
