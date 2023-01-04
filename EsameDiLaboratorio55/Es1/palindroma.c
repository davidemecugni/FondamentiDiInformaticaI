#include "palindroma.h"

bool palindroma(const char* str) {
	if (str == NULL || strcmp(str, "")==0) {
		return NULL;
	}
	char *rev = calloc(strlen(str) +1 , sizeof(char));
	if (rev == NULL) {
		return NULL;
	}
	for (size_t i = 0; i < strlen(str); i++) {
		rev[i] = str[strlen(str) - 1 - i];
	}
	bool res = strcmp(str, rev) == 0;
	free(rev);
	return res;
}