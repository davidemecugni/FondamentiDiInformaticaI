#include <math.h>
#include <stdio.h>  
#include <stdlib.h>
int main(int argc, char* argv[]) {
	char* end;
	if (argc != 4) {
		return 1;
	}
	double a = strtod(argv[1], &end);
	if (*end != 0) {
		return 1;
	}
	double b = strtod(argv[2], &end);
	if (*end != 0) {
		return 1;
	}
	double c = strtod(argv[3], &end);
	if (*end != 0) {
		return 1;
	}
	if ( a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}

	double res = sqrt((a + b + c) * (-a+b+c)*(a-b+c)*(a+b-c))/4.0;
	printf("%f", res);
	return 0;
 }