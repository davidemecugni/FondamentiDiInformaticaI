#include <stdio.h>
#include <stdlib.h>

int rad(int num) {
	int newnum = 0;
	while(num > 0) {
		newnum += num % 10;
		num /= 10;
	}
	if (newnum > 9 || newnum < 0) {
		return rad(newnum);
	}
	else {
		return newnum;
	}
}
int main(int argc, char* argv[]) {
	if (argc != 2 || argv[1] == NULL) {
		return 1;
	}
	char* end;
	int num = strtol(argv[1], &end, 10);
	if (*end != 0 || num < 0) {
		return 1;
	}
	printf("%d", rad(num));
	return 0;
 }