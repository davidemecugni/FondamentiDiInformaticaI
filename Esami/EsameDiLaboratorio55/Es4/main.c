#include "rational.h"

int main(void) {
	size_t s = 0;
	struct rational* data;
	data = rational_read("file4.txt", &s);
	return 0;
}