#include <stdbool.h>

bool crescente(unsigned int x) {
	if (x < 10)
		return x;
	unsigned int max = x % 10;
	x /= 10;
	while (x > 0) {
		if (x % 10 > max) {
			return false;
		}
		max = x % 10;
		x /= 10;
	}
	return max;
}