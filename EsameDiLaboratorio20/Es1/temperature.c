#include <stdlib.h>
size_t gelate(const char* a, size_t n) {
	//situa 0 no info 1 prima calda -1 fredda
	size_t g = 0,situa=0;
	for (size_t i = 0; i < n; i++) {
		if (a[i] > 0) {
			situa = 1;
		}
		if (a[i] < 1 && situa == 1) {
			++g;
			situa = -1;
		}
	}
	return g;
}