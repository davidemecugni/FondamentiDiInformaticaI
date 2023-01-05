#include "sequenza.h"
bool seq_load(const char* filename, struct seq* s) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return false;
	}
	s->len = 0;
	size_t read = 0;
	s->values = malloc(sizeof(uint16_t));
	while (feof(f) != 1) {
		uint16_t r;
		read = fread(&r, sizeof(uint16_t), 1, f);
		if (read != 1) {
			break;
		}
		read = 0;
		s->len+=1;
		s->values = realloc(s->values, sizeof(uint16_t) * s->len);
		if (s->values == NULL) {
			return NULL;
		}
		s->values[s->len - 1] = r;
	}
	fclose(f);
	return true;
}