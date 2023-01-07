#include "images.h"

extern struct image* read_images(const char* filename, size_t* n) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	*n = 0;
	struct image* res = calloc(1, sizeof(struct image));
	int scanfRes = 0;
	while (feof(f) != 1) {
		scanfRes = fscanf(f,"%255[^:]s", res[*n].name);
		if (scanfRes != 1) {
			break;
		}
		if (getc(f) != ':') {
			break;
		}
		scanfRes = fscanf(f, "%zu", &res[*n].height);
		if (scanfRes != 1) {
			break;
		}
		if (getc(f) != ':') {
			break;
		}
		scanfRes = fscanf(f, "%zu", &res[*n].width);
		if (scanfRes != 1) {
			break;
		}
		if (getc(f) != '\n') {
			break;
		}
		*n += 1;
		res = realloc(res, (*n +1) * sizeof(struct image));
	}
	if (*n == 0) {
		free(res);
		return NULL;
	}
	return res;
}