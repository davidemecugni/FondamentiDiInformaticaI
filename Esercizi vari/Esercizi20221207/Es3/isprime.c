#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	char* end;
	int a = strtol(argv[1], &end, 10);
	if (end == NULL || a < 0 ) {
		return 1;
	}
	if (a == 0 || a == 1) {
		printf("false");
		return 0;
	}
	for (int i = 2; i < (int)sqrt(a)+1; i++) {
		if (a % i == 0) {
			printf("false");
			return 0;
		}
	}
	printf("true");
	return 0;
}