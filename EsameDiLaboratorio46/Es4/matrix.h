#if !defined MATRIX_H
#define MATRIX_H
#include <stdlib.h>
#include <stdio.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
extern void printmatrix(const struct matrix* mat);
extern struct matrix* mat_pad(const struct matrix* mat);
#endif /*MATRIX_H*/
