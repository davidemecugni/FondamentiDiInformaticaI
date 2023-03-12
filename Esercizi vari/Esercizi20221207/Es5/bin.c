#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
	if (argc != 2 || argv[1] == NULL) {
		return 1;
	}
	char* end;
	int num = strtol(argv[1], &end, 10);
	if (*end != 0 || num < 0) {
		return 1;
	}
	if (num == 0) {
		printf("0");
		return 0;
	}
	int copynum = num, len = 0, i;
	while (copynum != 0) {
		copynum >>= 1;
		++len;
	}
	char* str = calloc(len + 1, sizeof(char));
	i = 0;
	while (num != 0) {
		str[i] = (num % 2) + '0';
		num >>= 1;
		++i;
	}
	for (int i = len ; i-- > 0;) {
		printf("%c", str[i]);
	}
	free(str);
	return 0;
}