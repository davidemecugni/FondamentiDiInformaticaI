#include "rimuovi.h"
void rimuovi_stringa(char* parola, const char* str) {
	if (str == NULL || strcmp(str, "") == 0 ) {
		return;
	}
	size_t totallen = strlen(parola);
	while (strstr(parola, str) != NULL) {
		char* p = strstr(parola, str);
		for (size_t i = (size_t)(p - parola) + strlen(str); i < totallen; i++) {
			parola[i - strlen(str)] = parola[i];
		}
		parola[totallen - strlen(str)] = '\0';
	}
}