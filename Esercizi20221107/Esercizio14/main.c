#include <stdint.h>

extern int conta_spazi(const char* s);
int main(void) {
	char s[] = "prova stringa in cui contare gli spazi";
	size_t len;
	len = conta_spazi(s);
	return 0;
}