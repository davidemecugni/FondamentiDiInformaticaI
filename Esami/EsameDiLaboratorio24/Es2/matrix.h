#if !defined MATRIX_H
#define MATRIX_H
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
extern struct matrix* matrix_flip_h(const struct matrix* m);
#endif /*MATRIX_H*/