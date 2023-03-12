#include "persona.h"

int main(void) {
	size_t n = 0;
	struct persona* res = leggi_persone("file2.txt", &n);
	return 0;
}