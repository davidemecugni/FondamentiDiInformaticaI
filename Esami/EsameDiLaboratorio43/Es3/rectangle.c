#include "rectangle.h"

int find_largest(const struct rect* r, size_t n) {
	if (r == NULL || n == 0) {
		return -1;
	}
	int max = 0, max_ind = 0, len_x, len_y;
	for (size_t i = 0; i < n; i++) {
		len_x = abs(r[i].a.x - r[i].b.x);
		len_y = abs(r[i].a.y - r[i].b.y);
		if (max < len_x * len_y) {
			max_ind = i;
			max = len_x * len_y;
		}
	}
	return max_ind;
}
