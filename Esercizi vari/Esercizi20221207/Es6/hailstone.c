#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
	if (argc != 2 || argv[1] == NULL) {
		return -1;
	}
	char* end;
	int num = strtol(argv[1], &end, 10);
	if (num <= 0) {
		return 0;
	}
	printf("%d, ", num);
	int i = 0;
	do {
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = 3 * num + 1;
		}
		if (num != 1) {
			printf("%d, ", num);
		}
		else {
			printf("%d", num);
			break;
		}
		++i;
	} while (1);
	return i+2;
}