#include <stdint.h>
#include <stdlib.h>
uint32_t MCD(uint32_t f, uint32_t s) {
	if (f == 1 || s == 1) {
		return 1;
	}
	if (f > s) {
		uint32_t temp;
		temp = f;
		f = s;
		s = temp;
	}
	while (s % f != 0) {
		if (f > s) {
			uint32_t temp;
			temp = f;
			f = s;
			s = temp;
		}
		s = s - f;
	}
	return f;

}
extern uint32_t vector_MCD_NC(uint32_t* v, size_t n) {
	if (v == NULL || n == 0) {
		return 0;
	}
	if (n == 2) {
		uint32_t f = v[0], s = v[1];
		free(v);
		return MCD(f,s);
	}
	v = realloc(v, (n - 1) * sizeof(uint32_t));
	for (uint32_t i = 1; i < n; i++) {
		v[i - 1] = MCD(v[i], v[i - 1]);
	}
	return vector_MCD_NC(v, n - 1);
}

extern uint32_t vector_MCD(const uint32_t * v, size_t n) {
	if (v == NULL || n == 0) {
		return 0;
	}
	for (size_t i = 0; i < n; i++) {
		if (v[i] == 0) {
			return 0;
		}
	}
	if (n == 2) {
		return MCD(v[0], v[1]);
	}
	uint32_t* data = calloc(n - 1, sizeof(uint32_t));
	for (uint32_t i = 1; i < n; i++) {
		data[i - 1] = MCD(v[i], v[i - 1]);
	}
	return vector_MCD_NC(data, n - 1);
}