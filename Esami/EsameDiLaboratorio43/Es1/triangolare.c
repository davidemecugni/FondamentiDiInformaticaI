#include <stdbool.h>
#include <string.h>
bool triangolare(int n) {
	if (n < 1) {
		return false;
	}
	int i = 1;
	int num = 0;
	while (num < n) {
		num += i;
		i++;
	}
	return n == num;
}