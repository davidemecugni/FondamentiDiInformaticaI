#include <stdlib.h>
#include <stdint.h>
#include "stat.h"

extern double media (double *x, unsigned int n){
    double m = 0;
    for(int i=0; i<n; i++){
        m+=x[i];
    }
    return m/n;
}
extern double varianza (double *x, unsigned int n){
    double m = media(x,n);
    double s = 0;
    for(int i=0; i<n; i++){
        s += (x[i] - m)*(x[i] - m);
    }
    return s/n;
}