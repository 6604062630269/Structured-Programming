#include <stdio.h>

int main() {
	int row, column;
	scanf("%d %d", &row, &column);

	int ary[row][column];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			scanf("%d", &ary[i][j]);
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			printf("%d ", ary[i][j]+1);
		}
		printf("\n");
	}
	
	return 0;
}