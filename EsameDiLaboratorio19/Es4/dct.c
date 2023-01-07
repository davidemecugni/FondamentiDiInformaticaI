#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323
double alpha(size_t n_el,size_t N) {
	if (n_el == 0) {
		return sqrt(1 / (double)N);
	}
	return sqrt(2 / (double)N);
}
double somma(const double* in, size_t N, size_t n_el) {
	double s = 0;
	for (size_t j = 0; j < N; j++) {
		s += in[j] * cos(((2*j + 1) * n_el * PI) / (2 * N));
	}
	return s * alpha(n_el,N);
}
void dct(const double* in, double* out, size_t N) {
	if (in == NULL || out == NULL || N == 0) {
		return;
	}
	for (size_t i = 0; i < N; i++) {
		out[i] = somma(in, N, i);
	}
}