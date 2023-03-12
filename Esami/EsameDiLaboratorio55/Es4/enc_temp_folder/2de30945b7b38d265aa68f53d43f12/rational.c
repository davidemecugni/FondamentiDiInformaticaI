#include "rational.h"
struct rational* rational_read(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "r");
	if (f == NULL || size == NULL) {
		*size = 0;
		return NULL;
	}
	*size = 0;
	struct rational* data = NULL;
	char* c = malloc(sizeof(char)*200);
	int num, den, res;
	while (feof(f) != 1) {
		res = fscanf(f, "%d", &num);
		if (res != 1) {
			break;
		}
		res = fscanf(f, "%[^/]/",c);
		if (res < 1) {
			break;
		}
		res = fscanf(f, "%d", &den);
		if (res != 1) {
			break;
		}
		++*size;
		fscanf(f,"%[^-123456789]s",c);
		if (data == NULL) {
			data = calloc(sizeof(struct rational), 1);
		}
		else {
			data = realloc(data, *size * sizeof(struct rational));
		}
		data[*size-1].num = num;
		data[*size-1].den = den;
	}
	free(c);
	fclose(f);
	return data;
}