#include "config.h"

struct keyval* read_config(const char* filename, size_t* n) {
	if (filename == NULL || n == NULL) {
		return NULL;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	*n = 0;
	int c = 0;
	int flag = 0;
	struct keyval* res = calloc(1,sizeof(struct keyval));
	while (feof(f) != 1) {
		flag = 0;
		c = fscanf(f, "%[^ =\n\t]%*[ \t^\n]=%*[ \t^\n]%s\n", res[*n].k,res[*n].v);
		if (res[*n].k[0] == '#' || res[*n].v[0] == '#') {
			c = getc(f);
			while (1) {
				if (c == EOF || c == '\n') {
					break;
				}
				c = getc(f);
			}
			continue;
		}
		if (c != 2) {
			continue;
		}
		*n += 1;
		res = realloc(res, (*n + 1) * sizeof(struct keyval));
	}
	res = realloc(res, (*n) * sizeof(struct keyval));
	fclose(f);
	return res;
}