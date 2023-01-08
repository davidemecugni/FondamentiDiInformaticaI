#include "dev_standard.h"
double calcola_dev(const double* vec, size_t size) {
	double m = 0;
	for (size_t i = 0; i < size; i++) {
		m += vec[i];
	}
	m /= size;
	double sum=0;
	for (size_t i = 0; i < size; i++) {
		sum += (vec[i] - m) * (vec[i] - m);
	}
	sum /= size;
	return sqrt(sum);
}