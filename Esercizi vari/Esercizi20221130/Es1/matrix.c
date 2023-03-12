#include "matrix.h"

size_t indexOf(size_t rows, size_t cols, size_t totCols) {
	return rows * totCols + cols;
}

void printMatrix(const struct matrix* matrice) {
	for (size_t i = 0; i < matrice->rows; i++) {
		for (size_t j = 0; j < matrice->cols; j++) {
			printf("%f  ", matrice->data[indexOf(i,j, matrice->cols)]);
		}
		printf("\n");
	}
}

struct matrix* mat_create(size_t rows, size_t cols)
{
	struct matrix* A = malloc(sizeof(struct matrix));
	A->rows = rows;
	A->cols = cols;
	A->data = malloc(A->rows * A->cols * sizeof(double));
	return A;
}
struct matrix* mat_transpose(const struct matrix* mat) {
	if (mat == NULL) {
		return NULL;
	}
	struct matrix* r = mat_create(mat->cols, mat->rows);
	for (size_t i = 0; i < mat->rows; i++) {
		for (size_t j = 0; j < mat->cols; j++) {
			double in = mat->data[indexOf(i,j , mat->cols)]; 
			r->data[indexOf(j,i, mat->rows)] = in;
		}
	}
	return r;
}