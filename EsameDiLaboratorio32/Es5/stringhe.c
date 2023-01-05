#define _CRT_SECURE_NO_WARNINGS
#include "stringhe.h"
char* center(const char* str, size_t n, char c) {
	if (str == NULL) {
		return NULL;
	}
	char *res;
	if (strlen(str) >= n) {
		res = calloc((strlen(str) + 1), sizeof(char));
		strcpy(res, str);
		return res;
	}
	size_t current = 0;
	res = calloc(n +1, sizeof(char));
	if (strlen(str) % 2 == 1 && n % 2 == 0) {
		//Car in piu a dx
		for (size_t i = 0; i < (n - strlen(str)) / 2; i++, current++) {
			res[i] = c;
		}
		strcpy(res + current, str);
		current += strlen(str);
		for (size_t i = 0; i < ((n - strlen(str)) / 2) + 1; i++) {
			res[i + current] = c;
		}
	}
	else if (strlen(str) % 2 == 0 && n % 2 == 1) {
		//Car in piu a sx
		for (size_t i = 0; i < ((n - strlen(str)) / 2 +1); i++, current++) {
			res[i] = c;
		}
		strcpy(res + current, str);
		current += strlen(str);
		for (size_t i = 0; i < (n - strlen(str)) / 2; i++) {
			res[i + current] = c;
		}
	}
	else {
		for (size_t i = 0; i < (n-strlen(str)) / 2; i++, current++) {
			res[i] = c;
		}
		strcpy(res + current, str);
		current += strlen(str);
		for (size_t i = 0; i < (n - strlen(str)) / 2; i++) {
			res[i+ current] = c;
		}
	}
	return res;
}