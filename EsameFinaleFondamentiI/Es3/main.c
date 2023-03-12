#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern int* read_gruppi(const char* filename, size_t* ngruppi);
int main(void) {
	size_t *ngruppi = calloc(sizeof(size_t),1);
	int* res = read_gruppi("file3.txt", ngruppi);
	free(ngruppi);
	return 0;
}