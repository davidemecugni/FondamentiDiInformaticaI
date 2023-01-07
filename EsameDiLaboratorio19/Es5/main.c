#include "config.h"

int main(void) {
	struct keyval* res;
	size_t n = 0;
	res = read_config("config1.txt", &n);
	return 0;

}