#include "unpack.h"
void unpack_values(uint32_t pack, uint16_t* num1, uint16_t* num2, uint16_t* num3) {
	uint16_t a[3] = { 0,0,0 };
	for (size_t i = 0; i < 3; i++) {
		int pow = 1;
		for (size_t j = 0; j < 10; j++) {
			a[i] += (pack&0x1)*pow;
			pack >>= 1;
			pow <<= 1;
		}
	}
	*num1 = a[0];
	*num2 = a[1];
	*num3 = a[2];
}