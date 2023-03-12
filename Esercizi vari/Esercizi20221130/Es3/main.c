#include "libri.h"

int main(void) {
	FILE *f = fopen("test", "wb");
	uint16_t p[] = { 2003,2004,2005,2022,0 };
	struct libro l = {"Elementi di informatica 1", p };
	bool r = libro_scrivi(&l, f);
	fclose(f);
	return 0;
}