#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
extern double* read_csv(FILE* f, size_t* n);
int main(void) {
	FILE* f = fopen("primo.txt", "r");
	size_t d = 0;
	double* data = read_csv(f, &d);
	return 0;
}