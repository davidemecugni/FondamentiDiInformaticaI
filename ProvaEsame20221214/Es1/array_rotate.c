#include <stdlib.h>
int* rotate(const int* vec, size_t len, size_t r) {
	if (vec == NULL) {
		return NULL;
	}
	int* nuovo = malloc(sizeof(int) * len);
	if (nuovo == NULL) {
		return NULL;
	}
	for (size_t i = 0; i < len; i++) {
		nuovo[(i + r) % len] = vec[i];
	}
	return nuovo;
}