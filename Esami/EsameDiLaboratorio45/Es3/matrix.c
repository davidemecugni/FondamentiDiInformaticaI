#include "matrix.h"
double* matrix_snake(const struct matrix* m) {
	if (m == NULL)
	{
		return NULL;
	}
	double *data = calloc(m->rows * m->cols, sizeof(double));
	int toggle = 0;
	for (size_t row = 0; row < m->rows; row++, toggle^=1) {
		if (toggle == 0) {
			for (size_t col = 0; col < m->cols; col++) {
				data[row * m->cols + col] = m->data[row * m->cols + col];
			}
		}
		else {
			int x = 0;
			for (size_t col = m->cols; col-->0;x++) {
				data[row * m->cols + x] = m->data[row * m->cols + col];
			}
		}
	}
	return data;
}