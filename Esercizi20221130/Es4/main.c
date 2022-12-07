#include "matrix.h"
int main(void) {
	double* m = calloc(144, sizeof(double));
	for (int i = 1; i < 145; i++) {
		m[i - 1] = (double)i;
	}
	struct matrix start = { 12 , 12,  m };
	printMatrix(&start);
	struct matrix* stop = scambia_diagonali(&start);
	printf("\n\n\n");
	printMatrix(stop);
	free(stop);
	return 0;
}