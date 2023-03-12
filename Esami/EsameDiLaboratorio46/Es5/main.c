#include "product.h"
int main(void) {
	FILE *f = fopen("test.txt", "w");
	struct product A, B, C;
	A.fullName = "CICCIO";
	B.fullName = "ALBERTO";
	C.fullName = "PIERO";
	A.productId = "123";
	B.productId = "456";
	C.productId = "789";
	A.price = 1;
	B.price = 2;
	C.price = 3;
	struct product list[] = {A,B,C};
	write_products(f, list, 3);
	return 0;
}