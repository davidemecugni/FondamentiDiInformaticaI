#include <stdlib.h>
char* subcat(char* prima, char* seconda, int dim1, int dim2) {
	if ((dim1 + dim2 - 1) > 0)
		char *risultato = malloc((dim1 + dim2 - 1)*sizeof(char));
	else
		return NULL;
	int i=0;
	while (prima[i] != 0) {
		risultato[i] = prima[i];
		++i;
	}
	int j = 0;
	while (seconda[j] != 0) {
		risultato[i] = seconda[j];
		++i;
		++j;
	}
	risultato[dim1 + dim2 - 2] = 0;
	return risultato;
}
int dim(char* stringa) {
	int i=0;
	while (stringa[i] != 0) {
		++i;
	}
	return ++i;
}
char* copia(char* input, int dim) {
	char *risultato = malloc(dim * sizeof(char));
	int i = 0;
	while (input[i] != 0) {
		risultato[i] = input[i];
	}
	risultato[dim - 1] = 0;
	return risultato;
}
char* concatena(const char* prima, const char* seconda) {
	if ((prima == NULL || prima[0]==0 ) && (seconda != NULL || seconda[0] != 0)) {
		return seconda;
	}
	if ((seconda == NULL || seconda[0] == 0) && (prima != NULL || prima[0] != 0)) {
		return prima;
	}
	if ((prima == NULL || prima[0] == 0) && (seconda == NULL || seconda[0] == 0)) {
		return NULL;
	}
	else {
		return subcat(prima, seconda, dim(prima), dim(seconda));
	}
}