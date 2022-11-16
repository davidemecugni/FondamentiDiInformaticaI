#include "geometria.h"

int main(void) {
	struct punto x = { 1.0, 0.0 }; 
	struct punto y = { 2.0, 2.0 }; 
	struct punto z = { 3.0, 3.0 };
	int c = colineari(x,y,z);
	return 0;
}