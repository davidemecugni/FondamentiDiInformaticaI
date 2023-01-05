#include "unpack.h"

extern void unpack_values(uint32_t pack, uint16_t* num1, uint16_t* num2, uint16_t* num3)
{
	*num1 = pack & 0x3FF;
	*num2 = (pack & (0x3FF << 10))>>10;
	*num3 = (pack & (0x3FF << 20))>>20;
}