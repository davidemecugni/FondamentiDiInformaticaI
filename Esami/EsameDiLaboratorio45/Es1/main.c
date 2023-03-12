#include <stdbool.h>
#include <stdlib.h>
extern bool is_arithmetic(const int* v, size_t n);
int main(void) {
	int v[] = { 1, 3, 3, 7 };
	int res = is_arithmetic(v, 4);
	return 0;
}