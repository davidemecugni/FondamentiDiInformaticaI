#include <stdlib.h>
unsigned int* tartaglia(unsigned int* v, size_t n) {
	unsigned int* res;
	if (n == 0) {
		res = calloc(1, sizeof(unsigned int));
		if (res == NULL) {
			return NULL;
		}
		res[0] = (unsigned int)1;
		return res;
	}
	if (n == 1) {
		res = calloc(2, sizeof(unsigned int));
		if (res == NULL) {
			return NULL;
		}
		res[0] = (unsigned int)1;
		res[1] = (unsigned int)1;
		return res;
	}
	if (v == NULL) {
		return NULL;
	}
	res = calloc(n + 1, sizeof(unsigned int));
	res[0] = 1;
	res[n] = 1;
	for (size_t i = 1; i < n; i++) {
		res[i] = v[i - 1] + v[i];
	}
	return res;
}