#include "libri.h"

bool libro_scrivi(const struct libro* p, FILE* f) {
	if (f == NULL || feof(f) ){
		return false;
	}
	if (fwrite(p->titolo, sizeof(char), strlen(p->titolo) + 1, f) != strlen(p->titolo) + 1) {
		return false;
	}
	unsigned int i = 0;
	while (p->anni_ristampe[i]!=0) {
		if (fwrite(p->anni_ristampe + i, sizeof(uint16_t), 1, f) != 1) {
			return false;
		}
		++i;
	}
	if (fwrite(p->anni_ristampe + i, 2, 1, f) != 1) {
		return false;
	}
	return true;
}