#include "lettura.h"

double* leggidouble(const char* filename, size_t* size)
{
	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return NULL;
	*size = 0;
	size_t r = 0;
	double t;
	double *numbers = malloc(sizeof(double));
	if (numbers == NULL)
		return NULL;
	while (1) {
		r = fscanf(f, "%lf[\n\t ]", &t);
		if (feof(f) ) {
			if(*size>0)
				break;
			else {
				return NULL;
			}
		}
		if (r == 0) {
			return NULL;
		}
		numbers[*size] = t;
		++*size;
		numbers = realloc(numbers, (*size + 1)*sizeof(double));
		if (numbers == NULL) {
			return NULL;
		}
	}
	fclose(f);
	return numbers;
}

