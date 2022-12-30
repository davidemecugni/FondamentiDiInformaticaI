#include "matrix.h"

int main(void) {
	struct matrix m;
	m.rows = 2;
	m.cols = 3;
	m.data = calloc(6, sizeof(double));
	m.data[0] = 1;
	m.data[1] = 2;
	m.data[2] = 3;
	m.data[3] = 4;
	m.data[4] = 5;
	m.data[5] = 6;
	printmatrix(&m);
	struct matrix *res = mat_pad(&m);
	printmatrix(res);
	return 0;
}