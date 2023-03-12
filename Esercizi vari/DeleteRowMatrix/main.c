#include "matrix.h"

int main(void) {

	struct matrix* m = calloc(sizeof(struct matrix), 1);
	m->cols = 3;
	m->rows = 3;
	double data[] = { 1,2,3,4,5,6,7,8,9 };
	m->data = data;
	printMatrix(m);
	struct matrix* res = mat_delete_row(m, 1);
	printMatrix(res);
	free(res->data);
	free(res);
	free(m);
	return 0;
}