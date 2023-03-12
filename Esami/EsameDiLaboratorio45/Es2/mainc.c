#include <stdint.h>
#include <string.h>
#include <stdlib.h>
extern uint8_t* nonogram_row(const char* s, size_t* n);
int main(void) {
	size_t p=0;
	char c[] = "**  ****  * ***";
	uint8_t *res = nonogram_row(c, &p);

	return 0;
}