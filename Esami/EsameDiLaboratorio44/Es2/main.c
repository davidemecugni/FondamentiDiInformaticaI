#include <stdint.h>
#include <stdlib.h>
extern uint32_t vector_MCD(const uint32_t* v, size_t n);
extern uint32_t MCD(uint32_t f, uint32_t s);

int main(void) {
	uint32_t d[] = { 16711935, 16843009, 50529027, 84215045, 252645135, 286331153, 858993459, 1431655765, 4294967295, 0 };
	uint32_t res = vector_MCD(d,10);
	return 0;
}