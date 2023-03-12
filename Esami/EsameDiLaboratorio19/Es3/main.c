#include <string.h>
#include <stdlib.h>
#include <ctype.h>

extern char* farfallino_decode(const char* s);

int main(void) {
	char* res = farfallino_decode("Qufuefestafa efe' ufunafa frafasefe ufun pofo' pifiufu' lufungafa.");
	return 0;
}