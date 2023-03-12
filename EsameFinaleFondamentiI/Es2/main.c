#include "matrix.h"

int main(void) {
	struct matrix* m = calloc(sizeof(struct matrix), 1);
	m->rows = 2;
	m->cols = 3;
	double v[] = { 0,0,0,4,5,6 };
	m->data = v;
	mat_normalize_rows(m);
	return 0;
}