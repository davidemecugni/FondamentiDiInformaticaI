#include <stdint.h>
#include <string.h>
#include <stdlib.h>
uint8_t* nonogram_row(const char* s, size_t* n) {
	int number=0, ast=0, salti=0;
	if (strlen(s) == 0) {
		*n = 0;
		return calloc(1, sizeof(uint8_t));
	}
	if (s[0] == '*') {
		ast = 1;
	}
	for (size_t i = 1; i < strlen(s); i++) {
		if ((s[i] == ' ' && ast == 1) || (s[i] == '*' && ast == 0)) {
			salti++;
		}
		if (s[i] == '*') {
			ast = 1;
		}
		else {
			ast = 0;
		}
	}
	if (s[0] == '*') {
		salti++;
	}
	if (salti % 2 == 1) {
		salti += 1;
	}
	number = salti / 2;
	*n = number;
	uint8_t* data = calloc(number, sizeof(uint8_t));
	int index = 0;
	ast = 0;
	if (s[0] == '*') {
		data[index] += 1;
		ast = 1;
	}
	for (size_t i = 1; i < strlen(s); i++) {
		if ((s[i] == ' ' && ast == 1)) {
			++index;
			if (index == number) {
				break;
			}
		}
		if (s[i] == '*') {
			data[index] += 1; 
			ast = 1;
		}
		else {
			ast = 0;
		}
	}
	return data;
}