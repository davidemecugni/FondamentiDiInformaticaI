#include "path_split.h"
void path_split(const char* str, char** path, char** filename) {
	//Controllo iniziale
	if (str == NULL) {
		path = NULL;
		filename = NULL;
		return;
	}
	//Alloco
	path = calloc(1, sizeof(strlen(str)));
	filename = calloc(1, sizeof(strlen(str)));

	char *pa = calloc(strlen(str), sizeof(char));
	path = &pa;
	if (pa == NULL) {
		return;
	}
	char *f = calloc(strlen(str), sizeof(char));
	filename = &f;
	if (f == NULL) {
		return;
	}
	//Uso strrchr
	char *p = strrchr(str, '\\') ;
	int j = 0;
	for (size_t i = 0; i < strlen(str); i++) {
		if (&str[i] <= p) {
			pa[i] = str[i];
		}
		else {
			f[j] = str[i];
			++j;
		}
	}

 }