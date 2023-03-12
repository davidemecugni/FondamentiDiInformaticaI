#include "matrix.h"

int main(void) {
	struct matrix A;
	A.rows = 3;
	A.cols = 3;
	double d[] = { 1,2,3,4,5,6,7,8,9 };
	A.data = d;
	double *res = matrix_snake(&A);
	return 0;

}