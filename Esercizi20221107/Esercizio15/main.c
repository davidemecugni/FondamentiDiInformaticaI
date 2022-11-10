#include <stdint.h>
#include "cerca.h"

int main(void) {
	char s[] = "aereo";
	size_t len;
	len = cerca_primo(s,'x');
	return 0;
}