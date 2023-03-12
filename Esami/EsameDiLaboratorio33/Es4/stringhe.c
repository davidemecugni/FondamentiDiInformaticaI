#include "stringhe.h"

char* title(const char* str) {
	if (str == NULL) {
		return NULL;
	}
	char* res = calloc(strlen(str)+1, 1);
	res[0] = toupper(str[0]);
	for (size_t i = 1; i < strlen(str); i++)  {
		if (isspace(str[i - 1])) {
			res[i] = toupper(str[i]);
		}
		else {
			res[i] = str[i];
		}
	}
	return res;
}
