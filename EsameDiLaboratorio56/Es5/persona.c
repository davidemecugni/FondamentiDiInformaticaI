#include "persona.h"

struct persona* leggi_persone(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "r");
	if (size == NULL) {
		return NULL;
	}
	if (f == NULL) {
		*size = 0;
		return NULL;
	}
	int res, n;
	res = fscanf(f, "%d\n", &n);
	if (res != 1 || res == EOF || n <= 0) {
		fclose(f);
		*size = 0;
		return NULL;
	}
	*size = n;
	struct persona* risultato = calloc(n, sizeof(struct persona));
	if (risultato == NULL) {
		*size = 0;
		fclose(f);
		return NULL;
	}
	char nome[50] = { 0 };
	int anni;
	for (int i = 0; i < n; i++) {
		res = fscanf(f, "%d,", &anni);
		if (res != 1 || res == EOF) {
			free(risultato);
			*size = 0;
			fclose(f);
			return NULL;
		}
		res = fscanf(f, "%[^\n]s", nome);
		if (res != 1 || res == EOF) {
			free(risultato);
			*size = 0;
			fclose(f);
			return NULL;
		}
		risultato[i].anni = anni;
		strcpy(risultato[i].nome, nome);
	}
	return risultato;
}