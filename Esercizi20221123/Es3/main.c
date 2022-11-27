#include "lettura.h"
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	size_t lenght=0;
	int* numbers = malloc(12);
	numbers = leggidouble("esempio", &lenght);
	return 0;
}