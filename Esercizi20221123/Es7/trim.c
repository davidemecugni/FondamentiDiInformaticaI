#include <string.h>
#include <stdlib.h>
char* trim(const char* s) {
	if (s == NULL) {
		return NULL;
	}
	size_t len = strlen(s);
	int i = 0, start = 0, stop = 0;
	while (s[i] != 0) {
		if (s[i] == ' ') {
			--len;
		}
		else {
			start = i;
			break;
		}
		++i;
	}
	if (len == 0) {
		char* res = calloc(1, sizeof(char));
		res = "";
		return res;
	}
	i = strlen(s)-1;
	while (i > 0) {
		if (s[i] == ' ') {
			--len;
		}
		else {
			stop = i;
			break;
		}
		--i;
	}
	char* res = calloc(sizeof(char) * len + 1, sizeof(char));
	for (i = start; i < stop + 1; i++) {
		res[i - start] = s[i];
	}
	return res;
}