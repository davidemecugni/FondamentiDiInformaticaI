#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int power3(int num, int pow) {
	if (pow == 0) {
		return 1;
	}
	for (int i = 1; i < pow; i++) {
		num *= 3;
	}
	return num;
}
int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	int res = 0, pow = 0;
	for (int i = strlen(argv[1]) - 1; i > -1; i--, pow++) {
		if (argv[1][i] == '+') {
			res += power3(3, pow);
		}
		else if (argv[1][i] == '-') {
			res -= power3(3, pow);
		}
		if (argv[1][i] != '+' && argv[1][i] != '-' && argv[1][i] != '0') {
			return 1;
		}
	}
	printf("%d\n", res);
	return 0;
}