#include "scrittura.h"
int scrivimaiuscolo(const char* filename) {
	FILE *f = fopen(filename, "r");
	if (f == NULL) {
		return 0;
	}
	while (1) {
		int r = fgetc(f);
		if (r == EOF) {
			break;
		}
		fprintf(stdout, "%c", toupper(r));
	}
	fclose(f);
	return 1;
}