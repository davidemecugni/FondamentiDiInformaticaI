#include "risiko.h"

int main(void) {
	char persedif = 0, perseatt = 0;
	struct lancio *dif = calloc(sizeof(struct lancio),1);
	struct lancio *att = calloc(sizeof(struct lancio),1);
	dif->n_dadi = (char)3;
	att->n_dadi = (char)3;
	char arr[] = { 5,1,1 };
	*dif->valori = arr;
	arr[0] = 3, arr[1] = 3, arr[2] = 1;
	*att->valori = arr;
	confronta_lanci(att, dif, &perseatt, &persedif);
	return 0;

}