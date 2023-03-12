#include "matrix.h"
struct matrix* mat_reset_cross(const struct matrix* m, size_t ir, size_t ic) {
	if (m == NULL || ir >= m->rows || ic >= m->cols) {
		return NULL;
	}
	struct matrix* res = calloc(sizeof(struct matrix),1);
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = calloc(m->rows * m->cols, sizeof(double));
	for (size_t row = 0; row < m->rows; row++) {
		for (size_t col = 0; col < m->cols; col++) {
			if (row == ir && col == ic) {
				res->data[row * res->cols + col] = m->data[row * res->cols + col];
				continue;
			}
			else if (row == ir || col == ic) {
				res->data[row * res->cols + col] = 0;
				continue;
			}
			res->data[row * res->cols + col] = m->data[row * res->cols + col];

		}
	}
	return res;
}