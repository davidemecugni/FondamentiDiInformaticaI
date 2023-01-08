#include "matrix.h"
//	LT, LE, EQ, NE, GE, GT
bool compare(enum comparisons cmp, double a, double b) {
	switch (cmp) {
	case LT:
		return a < b;
	case LE:
		return a <= b;
	case EQ:
		return a == b;
	case NE:
		return a != b;
	case GE:
		return a >= b;
	case GT:
		return a > b;
	}
}
struct bmatrix* mat_boolean(const struct matrix* m, double rhs, enum comparisons cmp) {
	if (m == NULL) {
		return NULL;
	}
	struct bmatrix* res = calloc(sizeof(struct bmatrix), 1);
	if (res == NULL) {
		return NULL;
	}
	res->cols = m->cols;
	res->rows = m->rows;
	res->data = calloc(res->cols * res->rows, sizeof(bool));
	if (res->data == NULL) {
		return NULL;
	}
	for (size_t row = 0; row < res->rows; row++) {
		for (size_t col = 0; col < res->cols; col++) {
			res->data[col + row * res->cols] = compare(cmp, m->data[col + row * res->cols], rhs);
		}
	}
	return res;
}