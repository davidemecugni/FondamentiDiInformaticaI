#include "frequenza.h"
struct oggetto* piu_frequente(const struct carta* c) {
	int numerocartediverse = 0;
	int mod = 0;
	struct freq* div = calloc(c->n, sizeof(struct freq));
	size_t i;
	for (i = 0; i < c->n; i++) {
		for (size_t j = 0; j < numerocartediverse; j++) {
			if (strcmp(div[j].colorenumero, c[i].disegni->colorenumero) != 0) {
				if (strcmp(div[j].forma, c[i].disegni->forma) != 0) {
					mod = 1;
					break;
				}
			}
			if (strcmp(div[j].colorenumero, c[i].disegni->colorenumero) == 0) {
				if (strcmp(div[j].forma, c[i].disegni->forma) == 0) {
					div[j].numero++;
					break;
				}
			}
		}
		if (!mod) {
			div[numerocartediverse].forma = calloc(strlen(c[i].disegni->forma) + 1, 1);
			div[numerocartediverse].colorenumero = calloc(strlen(c[i].disegni->colorenumero) + 1, 1);
			strcmp(div[numerocartediverse].forma, c[i].disegni->forma);
			strcpy(div[numerocartediverse].colorenumero, c[i].disegni->colorenumero);
			div[numerocartediverse].numero = 1;
			numerocartediverse++;
		}
		mod = 0;
	}
	return NULL;
	
}