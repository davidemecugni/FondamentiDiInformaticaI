#include "matrix.h"
int main(void) {
	struct matrix* A = calloc(sizeof(struct matrix),1);
	A->rows = 3;
	A->cols = 3;
	double data[] = { 1,2,3,4,5,6,7,8,9 };
	A->data = data;
	matrix_flip_v(A);
	free(A);
	return 0;
}