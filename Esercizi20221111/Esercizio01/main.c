#include <stdlib.h>
extern char* concatena(const char* prima, const char* seconda);

int main(void) {
	char s1[] = "Questa e' la ";
	char s2[] = "stringa risultante.";
	char* s;
	s = concatena(NULL, s2);
	free(s);
}