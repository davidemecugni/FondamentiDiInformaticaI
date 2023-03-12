#include <stdbool.h>
#include <stdlib.h>
bool is_arithmetic(const int* v, size_t n) {
	if (v == NULL) {
		return false;
	}
	if (n < 2) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	int diff = v[1] - v[0];
	for (size_t i = 2; i < n; i++) {
		if (v[i] - v[i - 1] != diff) {
			return false;
		}
	}
	return true;
}