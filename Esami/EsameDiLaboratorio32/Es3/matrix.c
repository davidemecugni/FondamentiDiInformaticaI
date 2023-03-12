#include "matrix.h"
struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p) {
	if (m == NULL || p == NULL) {
		return NULL;
	}
	struct matrix* res = calloc(1, sizeof(struct matrix));
	if (res == NULL) {
		return NULL;
	}
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = calloc(res->rows * res->cols, sizeof(double));
	if (res->data == NULL) {
		return NULL;
	}
	for (size_t row = 0; row < m->rows; row++) {
		for (size_t col = 0; col < m->cols; col++) {
			res->data[col + row * res->cols] = m->data[col + p[row] * res->cols];
		}
	}
	return res;
}