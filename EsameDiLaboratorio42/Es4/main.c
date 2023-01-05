#include "matrix.h"

int main(void) {
	struct matrix* a = calloc(sizeof(struct matrix),1);
	a->rows = 3;
	a->cols = 3;
	double data[] = { 1,2,3,4,5,6,7,8,9 };
	a->data = data;
	struct matrix* res = mat_reset_cross(a, 0, 1);
	return 0;
	
}