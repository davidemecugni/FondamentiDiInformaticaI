#include "byteswap.h"

int main(void) {
	uint32_t input = 0x0a0b0c0d, output;
	output = byteswap(input);
	return 0;
}