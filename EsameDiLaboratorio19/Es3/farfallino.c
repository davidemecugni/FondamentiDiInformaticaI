#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int vocale(char c) {
	c = tolower(c);
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
char* farfallino_decode(const char* s) {
	if (s == NULL) {
		return NULL;
	}
	if (strcmp(s, "") == 0) {
		char* res = calloc(1, 1);
		return res;
	}
	int iforres = 0;
	char* res = calloc(strlen(s), sizeof(char));
	if (!vocale(s[0]) ){
		res[iforres] = s[0];
		++iforres;
	}
	if (!vocale(s[1])) {
		res[iforres] = s[1];
		++iforres;
	}
	for (size_t i = 2; i < strlen(s); i++) {
		if (vocale(s[i]) && (s[i - 1] == 'f' || s[i - 1] == 'F') && vocale(s[i - 2])) {
			res[iforres] = s[i];
			++iforres;
			continue;
		}
		if (!vocale(s[i])) {
			if (s[i] == 'f' || s[i] == 'F') {
				if (vocale(s[i - 1])) {
					if (i < strlen(s) - 1) {
						if (vocale(s[i + 1])) {
							continue;
						}
					}
				}
			}
			res[iforres] = s[i];
			++iforres;
			continue;
		}
	}
	res = realloc(res, strlen(res) + 1);
	return res;
}