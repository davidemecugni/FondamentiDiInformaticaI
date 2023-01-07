#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h> 
char* sottrai_stringhe(const char* a, const char* b) {
	if (a == NULL || b == NULL) {
		return NULL;
	}
	if (strcmp(a, b) == 0) {
		char *ret = calloc(2, 1);
		strcpy(ret, "0");
		return ret;
	}
	long long unsigned aNumber, bNumber, result;
	char* res;
	aNumber = strtoll(a, &res, 10);
	bNumber = strtoll(b, &res, 10);
	result = aNumber - bNumber;
	char* resultString = calloc(strlen(a) + 1 , 1);
	int r = sprintf(resultString, "%llu", result);
	if (r < 1) {
		return NULL;
	}
	return resultString;

}