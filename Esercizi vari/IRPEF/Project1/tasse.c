#include <stdlib.h>
extern unsigned int irpef(unsigned int stipendio, unsigned int* scaglioni, unsigned int* aliquote, size_t n) {
	int res = 0;
	res += aliquote[0] * stipendio / 100;
	for (size_t i = 1; i < n; i++) {
		if ((stipendio - scaglioni[i+1]) < 0) {
			break;
		}
		res += aliquote[i+1] * (stipendio - scaglioni[i]) / 100;
	}
	return res;
}