#include <math.h>
extern double area_trapezio(double a, double b, double c, double d) {
	if (b <= a) {
		return 0;
	}
	return 0.5 * (a + b) * sqrt(c * c - 0.25 * ((b - a) + (c * c - d * d) / (b - a))* ((b - a) + (c * c - d * d) / (b - a)));
}