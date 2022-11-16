#include <stdlib.h>
extern size_t conta_parole(const char* s);

int main(void) {
	char* c = "1 2 3 a b c ";
	size_t risultato = conta_parole(c);
	return 0;
}