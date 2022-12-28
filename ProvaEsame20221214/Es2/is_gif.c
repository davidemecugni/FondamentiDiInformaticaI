#include "is_gif.h"
bool is_gif(const char* filename) {
	FILE *f = fopen(filename, "rb");
	if (f == NULL) {
		return false;
	}
	if (feof(f)) {
		fclose(f);
		return false;
	}
	char r[7]="\0\0\0\0\0\0\0";
	size_t ret = fread(r, sizeof(char), 6, f);
	if (ret != 6) {
		fclose(f);
		return false;
	}
	if (strcmp(r, "GIF89a") == 0 || strcmp(r, "GIF87a") == 0) {
		fclose(f);
		return true;
	}
	fclose(f);
	return false;
}