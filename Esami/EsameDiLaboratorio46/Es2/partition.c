#include <stdio.h>
extern size_t find_first_partition(const int* seq, size_t n) {
	if (seq == NULL || n == 0) {
		return 0;
	}
	int block = 0;
	for (size_t i = 0; i < n; i++) {
		block = 0;
		for (size_t j = 0; j < i && !block; j++) {
			if (seq[j] > seq[i] || seq[i] == seq[j]) {
				block = 1;
			}
		}
		for (size_t j = i+1; j < n && !block; j++) {
			if (seq[i] > seq[j] || seq[i] == seq[j]) {
				block = 1;
			}
		}
		if (!block) {
			return i;
		}
	}
	return n;
}