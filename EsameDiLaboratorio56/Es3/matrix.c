#include "matrix.h"
struct matrix* matrix_quadruplica(const struct matrix* m) {
	if (m == NULL || m->data == NULL) {
		return NULL;
	}
	struct matrix* res = calloc(1,sizeof(struct matrix));
	res->rows = m->rows * 2;
	res->cols = m->cols * 2;
	res->data = calloc(m->rows * m->cols * 4, sizeof(double));
	for (size_t row = 0; row < 2 * m->rows; row++) {
		for (size_t col = 0; col < 2 * m->cols; col++) {
			if (row < m->rows) {
				if (col < m->cols) {
					res->data[row * res->cols + col] = m->data[row * m->cols + col];
				}
				else {
					res->data[row * res->cols + col] = m->data[row * m->cols + (col -m->cols)];
				}
			}
			else {
				if (col < m->cols) {
					res->data[row * res->cols + col] = m->data[(row- m->rows) * m->cols + col];
				}
				else {
					res->data[row * res->cols + col] = m->data[(row - m->rows) * m->cols + col - m->cols];
				}
			}
		}
	}
	return res;
}

void printMatrix(const struct matrix* m) {
	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			printf("%.1f ", m->data[r * m->cols + c]);
		}
		printf("\n");
	}
}