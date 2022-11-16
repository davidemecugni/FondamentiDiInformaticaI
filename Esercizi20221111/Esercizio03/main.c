#include "complessi.h"

int main(void) {
	struct complesso a = { 1.0,1.0 };
	struct complesso b = { 4.0 , -2.0 };
	prodotto_complesso(&a, &b);
}