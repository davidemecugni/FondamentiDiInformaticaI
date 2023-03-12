#if !defined MATRIX_H
#define MATRIX_H
#include <stdio.h>
#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* mat_delete_row(const struct matrix* m, size_t i);
void printMatrix(const struct matrix* m);
#endif /*MATRIX_H*/