#include "matrix.h"

size_t indexOf(size_t rows, size_t cols, size_t totCols) {
	return rows * totCols + cols;
}

void printMatrix(const struct matrix* matrice) {
	for (size_t i = 0; i < matrice->rows; i++) {
		for (size_t j = 0; j < matrice->cols; j++) {
			printf("%.1f  ", matrice->data[indexOf(i, j, matrice->cols)]);
		}
		printf("\n");
	}
}

struct matrix* mat_create(size_t rows, size_t cols)
{
	struct matrix* A = malloc(sizeof(struct matrix));
	if (A == NULL) {
		return NULL;
	}
	A->rows = rows;
	A->cols = cols;
	A->data = malloc(A->rows * A->cols * sizeof(double));
	if (A->data == NULL) {
		return NULL;
	}
	return A;
}
struct matrix* mat_transpose(const struct matrix* mat) {
	if (mat == NULL) {
		return NULL;
	}
	struct matrix* r = mat_create(mat->cols, mat->rows);
	for (size_t i = 0; i < mat->rows; i++) {
		for (size_t j = 0; j < mat->cols; j++) {
			double in = mat->data[indexOf(i, j, mat->cols)];
			r->data[indexOf(j, i, mat->rows)] = in;
		}
	}
	return r;
}

extern struct matrix* scambia_diagonali(const struct matrix* m) {
	if (m == NULL || (m->rows != m->cols)) {
		return NULL;
	}
	double* prin = calloc(m->rows * sizeof(double), sizeof(double));
	double* sec = calloc(m->rows * sizeof(double), sizeof(double));
	if (prin == NULL || sec == NULL) {
		return NULL;
	}
	for (size_t i = 0; i < m->rows; i++) {
		prin[i] = m->data[indexOf(i, i, m->cols)];
		sec[i] = m->data[indexOf(i, m->rows-i-1, m->cols)];
	}
	struct matrix* copia = mat_create(m->rows, m->cols);
	if (copia == NULL) {
		return NULL;
	}
	for (size_t i = 0; i < copia->rows; i++) {
		for (size_t j = 0; j < copia->cols; j++) {
			copia->data[indexOf(i, j, m->cols)] = m->data[indexOf(i, j, m->cols)];
		}
	}
	printf("COPIA: \n\n");
	printMatrix(copia);
	for (size_t i = 0; i < m->rows; i++) {
	copia->data[indexOf(i, m->rows - i-1, m->cols)]= prin[i];
	copia->data[indexOf(i, i, m->cols)] = sec[i];
	}
	free(prin); 
	free(sec);
	return copia;
}
