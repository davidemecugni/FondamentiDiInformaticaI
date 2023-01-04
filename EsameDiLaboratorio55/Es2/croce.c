#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int printSpaces(FILE* f, size_t n) {
	int res = 0;
	for (size_t i = 0; i < n; i++) {
		res = fprintf(f," ");
		if (res == 0) {
			return 0;
		}
	}
	return 1;
}

extern void stampa_croce(FILE* f, size_t dim) {
	if (dim == 0 || f == NULL) {
		return;
	}
	for (size_t i = 0; i < dim -1; i++) {
		printSpaces(f, i);
		fprintf(f, "\\");
		printSpaces(f,  2 * dim - (i * 2) - 2);
		fprintf(f, "/\n");
	}
	printSpaces(f, dim - 1);
	fprintf(f, "\\");
	fprintf(f, "/\n");
	printSpaces(f, dim - 1);
	fprintf(f, "/");
	fprintf(f, "\\\n");
	for (size_t i = 0; i < dim - 1; i++) {
		printSpaces(f, dim -i- 2);
		fprintf(f, "/");
		printSpaces(f, i * 2 + 2);
		fprintf(f, "\\\n");
	}
}