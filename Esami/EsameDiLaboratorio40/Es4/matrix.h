#define _CRT_SECURE_NO_WARNINGS
#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* mirror_mat(const struct matrix* m);
#endif /*MATRIX_H*/