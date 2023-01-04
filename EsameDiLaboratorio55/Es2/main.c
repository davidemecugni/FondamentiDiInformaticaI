#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
extern void stampa_croce(FILE* f, size_t dim);
int main(void) {
	FILE * f = fopen("test.txt", "w");
	if (f == NULL) {
		return 0;
	}
	stampa_croce(f, 6);
	fclose(f);

	return 0;
}