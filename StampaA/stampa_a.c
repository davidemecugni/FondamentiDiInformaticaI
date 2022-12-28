#include <stdint.h>
#include <stdio.h>
void stampa_barra(uint8_t len, uint8_t pos, char c) {
	for (uint8_t i = 0; i < len; i++) {
		if (i == pos) {
			printf("%c", c);
		}
		else {
			printf(" ");
		}

	}
}

extern void stampa_a(uint8_t n) {
	if (n % 2 == 0 || n == 1) {
		return;
	}

	for (uint8_t i = 0; i < n; i++) {
		if (i == (n / 2 )) {
			for (uint8_t j = 0; j < n - i-1; j++) {
				printf(" ");
			}
			printf("/");
			for (uint8_t j = 0; j < (2*i); j++) {
				printf("-");
			}
			printf("\\");
		}
		else {
			stampa_barra(n, n - i - 1, '/');
			stampa_barra(n, i, '\\');
			
		}
		printf("\n");
	}
}
