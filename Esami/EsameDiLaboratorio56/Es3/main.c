#include "matrix.h"

int main(void) {
	struct matrix* A = malloc(sizeof(struct matrix));
	A->rows = 2;
	A->cols = 2;
	double arr[] = { 1,2,3,4 };
	A->data = arr;
	printMatrix(A);
	struct matrix* res = matrix_quadruplica(A);
	printMatrix(res);
	return 0;
}