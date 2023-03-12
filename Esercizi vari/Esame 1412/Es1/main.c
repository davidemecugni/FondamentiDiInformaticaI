#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
extern int* rotate(const int* vec, size_t len, size_t r);
int main(void) {
	int start[] = { 1,2,3,4,5 };
	int *array = rotate(start, 5, 1);
	free(array);
	return 0;
}