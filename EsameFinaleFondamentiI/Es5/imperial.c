#include "imperial.h"
double pollice2m(double p) {
	return p * 0.0254;
}
double piede2m(double p) {
	return pollice2m(12 * p);
}
double iarda2n(double p) {
	return piede2m(3 * p);
}
double miglio2n(double p) {
	return iarda2n(1760 * p);
}
extern double to_meter(const char* imperial_length) {
	double numero;
	char unita[10];
	int p;
	double res = 0;
	while (strcmp(imperial_length, "") != 0) {
		sscanf(imperial_length, "%lf%n", &numero, &p);
		imperial_length += p;
		sscanf(imperial_length, "%s%n", unita, &p);
		if (strcmp(unita, "inch") == 0 || strcmp(unita, "inches") == 0 || strcmp(unita, "in") == 0 || strcmp(unita, "in.") == 0 || strcmp(unita, "\"") == 0 ) {
			res += pollice2m(numero);
		}
		else if (strcmp(unita, "foot") == 0 || strcmp(unita, "feet") == 0 || strcmp(unita, "ft") == 0 || strcmp(unita, "ft.") == 0 || strcmp(unita, "'") == 0) {
			res += piede2m(numero);
		}
		else if (strcmp(unita, "yard") == 0 || strcmp(unita, "yards") == 0 || strcmp(unita, "yd") == 0 || strcmp(unita, "yd.") == 0) {
			res += iarda2n(numero);
		}
		else if (strcmp(unita, "mile") == 0 || strcmp(unita, "miles") == 0 || strcmp(unita, "mi") == 0 || strcmp(unita, "mi.") == 0) {
			res += miglio2n(numero);
		}
		imperial_length += p;
	}
	return res;
}