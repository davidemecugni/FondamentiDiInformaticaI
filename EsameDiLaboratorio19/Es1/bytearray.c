#include "bytearray.h"
uint8_t* absdiff(const uint8_t* a, const uint8_t* b, size_t n) {
	if (a == NULL || b == NULL || n == 0) {
		return NULL;
	}
	uint8_t* res = calloc(n * sizeof(uint8_t),1);
	if (res == NULL) {
		return NULL;
	}
	for (size_t i = 0; i < n; i++) {
		res[i] = abs(a[i] - b[i]);
	}
	return res;
 }