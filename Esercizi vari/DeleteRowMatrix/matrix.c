#include "matrix.h"
void printMatrix(const struct matrix* m) {
	for (size_t i = 0; i < m->rows; i++) {
		for (size_t c = 0; c < m->cols; c++) {
			printf("%.1f ", m->data[m->cols * i + c]);
		}
		printf("\n");
	}
}
struct matrix* mat_delete_row(const struct matrix* m, size_t i) {
	if (m == NULL || m->rows == 1 || m->rows <= i) {
		//Condizioni richieste dall'esercizio
		return NULL;
	}
	struct matrix* res = calloc(sizeof(struct matrix), 1);
	if (res == NULL) {
		return NULL;
	}
	res->rows = m->rows - 1;
	res->cols = m->cols;
	res->data = calloc((m->rows - 1) * m->cols,sizeof(double));
	if (res->data == NULL) {
		return NULL;
	}
	for (size_t counter = 0; counter < ((m->rows) * m->cols); counter++) {
		if (counter < m->cols * i) {
			//Se il counter e' prima della riga da eliminare si copia
			res->data[counter] = m->data[counter];
		}
		if (counter >= m->cols * (i + 1)) {
			//Se il counter e' dopo la riga da eliminare si copia
			res->data[counter-m->cols] = m->data[counter];
		}
	}
	return res;
}