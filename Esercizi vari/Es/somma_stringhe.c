#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
extern char* somma_stringhe(const char* a, const char *b) {
	/*Controlli iniziali*/
	if (a == NULL || b == NULL) {
		return NULL;
	}
	char* end;
	/*Funzioni di conversione*/
	long al = strtol(a, &end,10);
	long bl = strtol(b,&end,10);
	if (a == 0 && b == 0) {
		return "0";
	}
	long res = al + bl;
	long copiares = res;
	int len = 0;
	/*Lughezza della stringa da allocare*/
	while (copiares > 0) {
		copiares /= 10;
		len++;
	}
	char* strres = calloc(len + 1, sizeof(char));
	/*Long to string*/
	sprintf(strres, "%d", res);
	return strres;
}