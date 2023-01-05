#include "sequenza.h"

int main(void) {
	struct seq* s = calloc(sizeof(struct seq),1);
	bool res = seq_load("seq3.bin", s);
	return 0;
}