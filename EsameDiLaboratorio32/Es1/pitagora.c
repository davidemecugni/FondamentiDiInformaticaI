#include <stdio.h>
void stampa_tavola_pitagorica(FILE* f, unsigned int n) {
	if (f == NULL || n == 0) {
		return;
	}
	for (unsigned int row = 1; row < n+1; row++) {
		for (unsigned int col = 1; col < n+1; col++) {
			if (col == n) {
				fprintf(f,"%u\n", row * col);
			}
			else {
				fprintf(f,"%u\t", row * col);
			}
		}
	}
}