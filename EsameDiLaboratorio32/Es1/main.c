#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


extern void stampa_tavola_pitagorica(FILE* f, unsigned int n);

int main(void) {
	FILE* f = fopen("test.txt", "w");
	stampa_tavola_pitagorica(f, 10);
	return 0;
}