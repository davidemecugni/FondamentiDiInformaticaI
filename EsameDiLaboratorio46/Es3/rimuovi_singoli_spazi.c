#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern char* rimuovi_singoli_spazi(const char* s) {
	if (s == NULL) {
		return NULL;
	}
	if (strlen(s) == 0) {
		return calloc(1,sizeof(char));
	}
	char* newstring = calloc(strlen(s)+1, sizeof(char));
	size_t p = 0, streak = 0;;
	for (size_t i = 0; i < strlen(s); i++) {
		if (s[i] != ' ') {
			streak = 0;
			newstring[p] = s[i];
			++p;
			continue;
		}
		if (s[i] == ' ' && i + 1 < strlen(s)) {
			if (s[i + 1] == ' ') {
				streak = 1;
			}
		}
		if (streak) {
			if (s[i] != ' ') {
				streak = 0;
				continue;
			}
			else {
				newstring[p] = s[i];
				p++;
			}
		}
	}
	return newstring;
}