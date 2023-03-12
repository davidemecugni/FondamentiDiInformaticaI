#include "matrix.h"
struct matrix* mat_pad(const struct matrix* mat) {
	if (mat->data == NULL) {
		return NULL;
	}
	size_t newrows = mat->rows * 2 - 1, newcols = mat->cols * 2 - 1;
	double* data = calloc(newrows * newcols, sizeof(double));
	size_t togglerow = 1, togglecol = 1;
	size_t oldrow=0, oldcol = 0;
	for (size_t r = 0; r < newrows; r++, oldcol = 0) {
		for (size_t c = 0; c < newcols; c++) {
			if (togglecol && togglerow) {
				data[r * newcols + c] = mat->data[oldrow * mat->cols + oldcol];
				oldcol++;
				
			}
			else {
				data[r * newcols + c] = 0.0;
			}
			togglecol ^= 1;
		}
		if (togglerow) {
			togglerow = 0;
			++oldrow;
		}
		else {
			togglerow = 1;
		}
		togglecol = 1;
	}
	struct matrix *res=calloc(1,sizeof(struct matrix));
	res->rows = newrows, res->cols = newcols, res->data = data;
	return res;
}

void printmatrix(const struct matrix* mat) {
	for (size_t r = 0; r < mat->rows; r++) {
		for (size_t c = 0; c < mat->cols; c++) {
			printf("%.1f ", mat->data[r * mat->cols + c]);
		}
		printf("\n");
	}
}