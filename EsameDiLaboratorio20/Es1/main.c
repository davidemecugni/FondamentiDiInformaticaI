#include <stdlib.h>
extern size_t gelate(const char* a, size_t n);

int main(void) {
	char c[] = { 1,0,1,0,1,0 };
	size_t g = gelate(c, 6);
	return 0;
}