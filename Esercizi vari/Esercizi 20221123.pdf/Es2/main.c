#include "lettura.h"
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	size_t lenght=0;
	int *numbers = leggiinteri("dati1.bin", &lenght);
	free(numbers);
	return 0;
}