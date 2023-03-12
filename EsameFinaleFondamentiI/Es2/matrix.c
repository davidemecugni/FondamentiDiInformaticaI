#include "matrix.h"
void mat_normalize_rows(struct matrix* m) {
	if (m == NULL) {
		return;
	}
	double normariga = 0;
	for (size_t row = 0; row < m->rows; row++) {
		for (size_t col = 0; col < m->cols; col++) {
			//Somma dei quadrati
			normariga += m->data[col + row * m->cols] * m->data[col + row * m->cols];
		}
		//Radice
		normariga = sqrt(normariga);
		if (normariga != 0) {
			for (size_t col = 0; col < m->cols; col++) {
				m->data[col + row * m->cols] /= normariga;
			}
		}
		normariga = 0;
	}
}