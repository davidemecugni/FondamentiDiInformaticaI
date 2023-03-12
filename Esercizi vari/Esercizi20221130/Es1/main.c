#include "matrix.h"
int main(void) {
	double* m = calloc(10, sizeof(double));
	for (int i = 1; i < 11; i++) {
		m[i-1] = (double)i;
	}
	struct matrix start = { 2 , 5,  m};
	printMatrix(&start);
	struct matrix *stop = mat_transpose(&start);
	printf("\n\n\n");
	printMatrix(stop);
	return 0;
}