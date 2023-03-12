
#include <stdlib.h>
extern unsigned int* tartaglia(unsigned int* v, size_t n);

int main(void) {
	unsigned int v[] = { 1,2,1 };
	unsigned int* res = tartaglia(v, 0);
	return 0;
}