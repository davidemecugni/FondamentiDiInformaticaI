#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int* read_gruppi(const char* filename, size_t* ngruppi) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	*ngruppi = 0;
	char line[101] = { 0 };
	int somma_parziale=0;
	int* gruppi = calloc(1, sizeof(int));
	while (feof(f) == 0) {
		if (fgets(line, 100, f) == NULL) {
			break;
		}
		if (strcmp(line,"")==0) {
			break;
		}
		if (strcmp(line, "\n") == 0) {
			gruppi[*ngruppi] = somma_parziale;
			somma_parziale = 0;
			*ngruppi += 1;
			gruppi = realloc(gruppi, (*ngruppi + 1)*sizeof(int));
		}
		else {
			long numero = strtol(line, NULL, 10);
			somma_parziale += (int)numero;
		}
	}
	if (somma_parziale != 0) {
		gruppi[*ngruppi] = somma_parziale;
		*ngruppi += 1;
	}
	gruppi = realloc(gruppi, *ngruppi * sizeof(int));
	fclose(f);
	return gruppi;
}