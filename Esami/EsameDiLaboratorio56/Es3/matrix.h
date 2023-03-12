#if !defined MATRIX_H
#define MATRIX_H
#include <stdlib.h>
#include <stdio.h>
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* matrix_quadruplica(const struct matrix* m);
extern void printMatrix(const struct matrix* m);
#endif /*MATRIX_H*/