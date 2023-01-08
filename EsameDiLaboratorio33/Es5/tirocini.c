#include "tirocini.h"

bool tirocinio_load(FILE* f, struct tirocinio* t) {
	if (f == NULL || t == NULL) {
		return false;
	}
	size_t read = 0;
	char* nome, *azienda1, *azienda2, *azienda3;
	nome = calloc(1000, 1);
	azienda1 = calloc(1000, 1);
	azienda2 = calloc(1000, 1);
	azienda3 = calloc(1000, 1);
	read = fscanf(f, "%[^,],%[^,],%[^,],%[^\n]\n", nome, azienda1, azienda2, azienda3);
	if (read != 4) {
		free(nome); free(azienda1); free(azienda2); free(azienda3);
		return false;
	}

	nome = realloc(nome, strlen(nome) + 1);
	azienda1 = realloc(azienda1, strlen(azienda1) + 1);
	azienda2 = realloc(azienda2, strlen(azienda2) + 1);
	azienda3 = realloc(azienda3, strlen(azienda3) + 1);
	t->nome = nome; 
	t->azienda1 = azienda1;
	t->azienda2 = azienda2;
	t->azienda3 = azienda3;
	return true;
}