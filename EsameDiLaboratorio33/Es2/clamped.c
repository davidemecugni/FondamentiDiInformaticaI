#include <stdlib.h>
int* clamped(const int* v, size_t n, int min, int max) {
	if (v == NULL || n == 0 || min > max) {
		return NULL;
	}
	int* ris = calloc(n, sizeof(int));
	for (size_t i = 0; i < n; i++) {
		if (v[i] < min) {
			ris[i] = min;
		}
		else if(v[i] >= min && v[i]<=max) {
			ris[i] = v[i];
		}
		else if (v[i] > max) {
			ris[i] = max;
		}
	}
	return ris;
}