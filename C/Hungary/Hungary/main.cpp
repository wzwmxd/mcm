#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define DIM 4

void minimize(int matrix[][DIM]);
int try_to_appoint(int matrix[][DIM]);
void appoint(int matrix[][DIM]);
void print(int matrix[][DIM]);

void minimize(int matrix[][DIM]) {
	for (int i = 0; i < DIM; i++) {
		int min = matrix[i][0];
		for (int j = 0; j < DIM; j++) {
			if (min > matrix[i][j])min = matrix[i][j];
		}
		for (int j = 0; j < DIM; j++) {
			matrix[i][j] -= min;
		}
	}
	for (int i = 0; i < DIM; i++) {
		int min = matrix[0][i];
		for (int j = 0; j < DIM; j++) {
			if (min > matrix[j][i])min = matrix[j][i];
		}
		for (int j = 0; j < DIM; j++) {
			matrix[j][i] -= min;
		}
	}
}
int try_to_appoint(int matrix[][DIM]) {
	char zero[DIM][DIM];
	memset(zero, -1, sizeof(char)*DIM*DIM);
	return DIM;
}
void appoint(int matrix[][DIM]) {
	minimize(matrix);
	print(matrix);

}
void print(int matrix[][DIM]) {
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int matrix[][DIM] = {
		{15,18,21,24},
		{19,23,22,18},
		{26,17,16,19},
		{19,21,23,17}
	};
	appoint(matrix);

	return 0;
}