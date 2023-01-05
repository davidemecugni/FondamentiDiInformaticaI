#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
extern char* codifica_morse(const char* testo) {
	if (testo == NULL) {
		return NULL;
	}
	char* morse = calloc(strlen(testo), sizeof(char) * 5);
	for (size_t i = 0; i < strlen(testo); i++) {
		switch (tolower(testo[i])) {
		case 'a':
			strcat(morse, "._ ");
			break;
		case 'b':
			strcat(morse, "_... ");
			break;
		case 'c':
			strcat(morse, "_._. ");
			break;
		case 'd':
			strcat(morse, "_.. ");
			break;
		case 'e':
			strcat(morse, ". ");
			break;
		case 'f':
			strcat(morse, ".._. ");
			break;
		case 'g':
			strcat(morse, "__. ");
			break;
		case 'h':
			strcat(morse, ".... ");
			break;
		case 'i':
			strcat(morse, ".. ");
			break;
		case 'j':
			strcat(morse, ".___ ");
			break;
		case 'k':
			strcat(morse, "_._ ");
			break;
		case 'l':
			strcat(morse, "._.. ");
			break;
		case 'm':
			strcat(morse, "__ ");
			break;
		case 'n':
			strcat(morse, "_. ");
			break;
		case 'o':
			strcat(morse, "___ ");
			break;
		case 'p':
			strcat(morse, ".__. ");
			break;
		case 'q':
			strcat(morse, "__._ ");
			break;
		case 'r':
			strcat(morse, "._. ");
			break;
		case 's':
			strcat(morse, "... ");
			break;
		case 't':
			strcat(morse, "_ ");
			break;
		case 'u':
			strcat(morse, ".._ ");
			break;
		case 'v':
			strcat(morse, "..._ ");
			break;
		case 'w':
			strcat(morse, ".__ ");
			break;
		case 'x':
			strcat(morse, "_.._ ");
			break;
		case 'y':
			strcat(morse, "_.__ ");
			break;
		case 'z':
			strcat(morse, "__.. ");
			break;
		case ' ':
			morse[strlen(morse) - 1] = '\0';
			strcat(morse, " / ");
			break;
		}

	}
	int len = strlen(morse) -1;
	morse =  realloc(morse,strlen(morse));
	morse[len] = '\0';
	return morse;
}