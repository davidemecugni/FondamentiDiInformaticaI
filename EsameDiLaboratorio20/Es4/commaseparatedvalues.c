#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern double* read_csv(FILE* f, size_t* n) {
	if (f == NULL) {
		return NULL;
	}
	*n = 0;
	double* data = malloc(sizeof(double));
	int res = 0, end =0, c;
	while (feof(f) != 1 && end ==0) {
		c = getc(f);
		if (c == EOF) {
			break;
		}
		while (c != ',') {
			if (c == EOF) {
				break;
			}
			if (isalnum(c) || c == '-') {
				ungetc(c, f);
				break;
			}
			if (!isspace(c)) {
				end = 1;
				break;
			}
			c = getc(f);
		}

		res = fscanf(f,"%lf", &(data[*n]));
		if (res != 1 || feof(f)) {
			break;
		}
		*n += 1;
		if (data != NULL) {
			data = realloc(data, (*n + 1) * sizeof(double));

		}
		if (data == NULL) {
			break;
		}
		c = getc(f);
		if (c == EOF) {
			break;
		}
		while (c != ',') {
			if (c == EOF) {
				break;
			}
			if (!isspace(c)) {
				end = 1;
				break;
			}
			c = getc(f);
		}
	}
	if (*n == 0) {
		free(data);
		return NULL;
	}
	return data;
}