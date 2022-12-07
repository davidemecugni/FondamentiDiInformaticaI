#ifndef MATRIX_H
#define MATRIX_H
#include <stdlib.h>
#include <stdio.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
extern void printMatrix(const struct matrix* mat);
extern struct matrix* scambia_diagonali(const struct matrix* m);
#endif /*MATRIX_H*/