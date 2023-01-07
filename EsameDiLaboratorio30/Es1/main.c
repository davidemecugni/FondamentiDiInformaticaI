#include <stdlib.h>
extern int* rotate(const int* vec, size_t len, size_t r);

int main() {
	int v[] = { 1,2,3,4 };
	int* res = rotate(v, 4, 1);
}