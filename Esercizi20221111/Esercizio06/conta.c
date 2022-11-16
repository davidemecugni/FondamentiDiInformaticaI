#include <stdlib.h>
#include <string.h>
size_t conta_parole(const char* s) {
	if (s == NULL) {
		return NULL;
	}
	size_t size = 0;
	int i = 0;
	while (s[i] != 0) {
		i++;
	}
	if (size == 0) {
		return 0;
	}
	size = i;
	size_t parole = 0;
	for (i = 0; i < size; i++) {
		if ((s[i]!=' ') && (i < (size - 2))) {
			if ((s[i + 1] == ' ' )&& (s[i + 2]!=' ')) {
				++parole;
			}
		}
	}
	return ++parole;
}