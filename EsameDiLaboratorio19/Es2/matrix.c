#include "matrix.h"

struct matrix* mat_creatediag(const double* values, size_t n) {
	struct matrix* res = calloc(1, sizeof(struct matrix));
	if (n == 0) {
		res->rows = 0;
		res->cols = 0;
		res->data = malloc(0);
		return res;
	}
	
	res->rows = n;
	res->cols = n;
	res->data = calloc(res->rows * res->cols, sizeof(double));
	for (size_t row = 0; row < res->rows; row++) {
		for (size_t col = 0; col < res->cols; col++) {
			if (row == col) {
				res->data[col + row * res->cols] = values[row];
			}
			else {
				res->data[col + row * res->cols] = 0.0;
			}
		}
	}
	return res;
}