#include "tirocini.h"

int main(void) {
	FILE* f = fopen("input1.txt", "r");
	struct tirocinio* t = calloc(sizeof(struct tirocinio), 1);
	bool res = tirocinio_load(f, t);
	return  0;
}