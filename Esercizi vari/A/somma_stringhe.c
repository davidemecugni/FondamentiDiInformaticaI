#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
extern char* somma_stringhe(const char* a, const char b*) {
	if (a == NULL || b == NULL) {
		return NULL;
	}
	long a = strtol(a);
	long b = strtol(b);
	if (a == 0 && b == 0) {
		return "0";
	}
	long res = a + b;
	long copiares = res;
	int len = 0;
	while (copiares > 0) {
		copiares /= 10;
		len++;
	}
	char* strres = calloc(len + 1, sizeof(char));
	sprintf(strres, "%l", res);
	return strres;
}