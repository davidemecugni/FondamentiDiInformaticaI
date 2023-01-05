extern char* codifica_morse(const char* testo);
#include <stdio.h>
int main() {
	printf(codifica_morse("CIAO MAMMA"));
	printf("\n_._. .. ._ ___ / __ ._ __ __ ._");
	return 0;
}