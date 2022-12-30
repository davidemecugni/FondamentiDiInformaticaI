#include "punto.h"
struct punto_pol cartesiano2polare(const struct punto_cart* p) {
	struct punto_pol res;
	res.r = sqrt(p->x * p->x + p->y * p->y);
	res.t = atan2(p->y, p->x);
	return res;
}
struct punto_cart polare2cartesiano(const struct punto_pol* p) {
	struct punto_cart res;
	res.x = p->r * cos(p->t);
	res.y = p->r * sin(p->t);
	return res;
}