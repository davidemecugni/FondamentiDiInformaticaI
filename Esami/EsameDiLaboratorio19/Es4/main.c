#include <stdlib.h>
extern void dct(const double* in, double* out, size_t N);
int main() {
	double v[] = { 3,5 };
	double out[2];
	dct(v, out, 2);
	return 0;
}