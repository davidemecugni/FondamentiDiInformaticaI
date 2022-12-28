#include "quadrati.h"
void stampa_riga(unsigned int len, bool estremo) {
	printf("*");
	for (unsigned int i = 0; i < len-2; i++) {
		estremo ? printf("*") : printf(" ");
	}
	printf("*");
}
extern void stampa_quadrato(unsigned int lato) {
	if (lato == 0) {
		return;
	}
	if (lato == 1) {
		printf("*");
		return;
	}
	stampa_riga(lato, true); printf("\n");
	for (unsigned int i = 0; i < lato - 2; i++) {
		stampa_riga(lato, false);
		printf("\n");
	}
	stampa_riga(lato, true);
}