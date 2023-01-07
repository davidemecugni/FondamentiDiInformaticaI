#include <stdlib.h>
extern int* rotate(const int* vec, size_t len, size_t r) {
	if (vec == NULL) {
		return NULL;
	}
	int* res = calloc(len, sizeof(int));
	for (size_t i = 0; i < len; i++) {
		res[(i + r) % len] = vec[i];
	}
	return res;
}