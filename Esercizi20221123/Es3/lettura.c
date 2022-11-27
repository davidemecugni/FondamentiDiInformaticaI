#include "lettura.h"

double* leggidouble(const char* filename, size_t* size)
{
	FILE* f = fopen(filename, "rb");
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
		if (feof(f)) {
			break;
		}
		if (r == 0) {
			return NULL;
		}
		numbers[(int)size] = t;
		++*size;
		numbers = realloc(numbers, size + 1);
		if (numbers == NULL) {
			return NULL;
		}
	}

	fclose(f);
	return numbers;
}

