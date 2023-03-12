#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
	if (argc == 1) {
		return 1;
	}
	int max , num;
	char* end;
	max = strtol(argv[1], &end, 10);
	if (*end != 0) {
		return 1;
	}
	for (size_t i = 2; i < argc; i++) {
		num = strtol(argv[i], &end, 10);
		if (*end != 0) {
			return 1;
		}
		if (num > max) {
			max = num;
		}
	}
	printf("%d", max);
	return 0;
}