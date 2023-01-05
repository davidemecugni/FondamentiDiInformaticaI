#include "images.h"

int main() {
	size_t n;
	struct image* res = read_images("file1.txt", &n);
	return 0;
}