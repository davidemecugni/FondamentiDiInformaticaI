#ifndef MATRIX_H
#define MATRIX_H
#include <stdlib.h>
#include <stdio.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
extern size_t indexOf(size_t rows, size_t cols, size_t totCols);
extern void printMatrix(const struct matrix* mat);
extern struct matrix* mat_transpose(const struct matrix* mat);
#endif /*MATRIX_H*/