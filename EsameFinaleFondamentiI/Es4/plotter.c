#include <string.h>
#include <math.h>
#include <stdio.h>
void printNtimes(char c, size_t n) {
	for (size_t i = 0; i < n; i++) {
		printf("%c", c);
	}
}
extern void plotter(const char* p) {
	if (p == NULL) {
		return;
	}
	for (size_t i = 0; i < strlen(p); i++) {
		if (p[i] < 0) {
			printNtimes(p[i + 1], abs(p[i]));
			++i;
			continue;

		}
		if (p[i] > 0) {
			printf("%c", p[i]);
			continue;
		}
		if (p[i] == 0) {
			break;
		}
	}
}