#include <stdlib.h>
extern void a_parole_1_999(char* sz, unsigned int i);

int main(void) {
	char* c = calloc(200, sizeof(char));
	a_parole_1_999(c, 101);
	a_parole_1_999(c, 228);
	a_parole_1_999(c, 337);
	a_parole_1_999(c, 456);
	a_parole_1_999(c, 565);
	a_parole_1_999(c, 674);
	a_parole_1_999(c, 782);
	a_parole_1_999(c, 828);
	a_parole_1_999(c, 909);
	a_parole_1_999(c, 999);
	return 0;
}