#include "unpack.h"

int main(void) {
	uint16_t n1, n2, n3;
	unpack_values(3147777, &n1, &n2, &n3);
	return 0;
}