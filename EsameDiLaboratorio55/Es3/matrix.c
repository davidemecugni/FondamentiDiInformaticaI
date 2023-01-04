#include "matrix.h"
struct matrix* matrix_flip_v(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}
	struct matrix* res = calloc(sizeof(struct matrix), 1);
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = calloc(m->rows * m->cols, sizeof(double));
	for (size_t row = 0, rowm = m->rows -1; row < m->rows; row++, rowm--) {
		for (size_t col = 0, colm = m->cols - 1; col < m->cols; col++, colm--) {
			res->data[row * res->cols + col] = m->data[rowm * m->cols + col];
		}
	}
	return res;
}