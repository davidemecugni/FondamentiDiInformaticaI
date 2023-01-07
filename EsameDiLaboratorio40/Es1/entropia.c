#include <stdlib.h>
#include <math.h>
double entropia(const double* v, size_t n) {
	if (n == 0 || v == NULL) {
		return 0.0;
	}
	int tuttizero = 1;
	for (size_t i = 0; i < n; i++) {
		if (v[i] != 0.0) {
			tuttizero = 0;
			break;
		}
	}
	if (tuttizero) {
		return 0.0;
	}
	double e = 0;
	for (size_t i = 0; i < n; i++) {
		if (v[i] != 0.0) {
			e -= (v[i] * log2(v[i]));
		}
	}
	return e;
}