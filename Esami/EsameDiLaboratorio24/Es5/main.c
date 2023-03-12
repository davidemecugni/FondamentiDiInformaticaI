#include "rimuovi.h"


int main(void) {
	char parole[] = "le lezioni di informatica sono finite";
	char pattern[] = "in";
	rimuovi_stringa(parole,pattern);
	return 0;
}