#include "stringhe.h"

int main(void) {
	char* c = center("ciao", 10, '.');
	free(c);
	return 0;
}