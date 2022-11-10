#include "stat.h"
#include <stdlib.h>
#include <stdint.h>

int main(void){

    double *d = malloc ( 3 * sizeof(double));
    d[0]=10,d[1]=20,d[2]=30;
    double m = media(d, 3);
    free(d);
    return 0;
}