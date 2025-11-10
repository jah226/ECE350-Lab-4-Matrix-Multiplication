
#include <stdio.h>

//void matrix_mult(int A[4][4], int B[4][4], int AB[4][4]);

void matrix_mult(int A[2][2], int B[2][2], int AB[2][2]);

int main()
{
	/*
	int matrix_A[4][4] = {{2,4,5,6},{4,3,5,5},{1,1,3,4},{1,1,1,5}};
	int matrix_B[4][4] = {{3,2,3,2},{5,6,4,2},{3,8,2,1},{8,8,1,5}};
	int matrix_C[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	int row_num = 4;
	int col_num = 4;
	*/

	int matrix_A[2][2] = {{2,6},{4,5}};
	int matrix_B[2][2] = {{3,2},{4,2}};
	int matrix_C[2][2] = {{0,0},{0,0}};
	int row_num = 2;
	int col_num = 2;

	matrix_mult(matrix_A, matrix_B, matrix_C);

	printf("\n");
	printf("Matrix AB = ");
	for (int row = 0; row < row_num; row++){
		printf("\n");
		for (int col = 0; col < col_num; col++){
			printf("%d",matrix_C[row][col]);
			printf(" ");
		}
	}
	printf("\n");
	printf("\n");

	return 0;
}
