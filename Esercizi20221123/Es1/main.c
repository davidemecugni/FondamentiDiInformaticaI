#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdbool.h>

extern bool scrivi_intero(const char* filename, int i);

int main() {
	bool r = scrivi_intero("test.txt", -2102);
	return 0;
}