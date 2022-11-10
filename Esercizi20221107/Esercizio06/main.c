#include <stdlib.h>
#include <stdint.h>

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


int main(void){
    size_t n=6;
    double *valori = malloc( n * sizeof(double));
    valori[0]=2;
    valori[1]=4;
    valori[2]=6;
    valori[3]=8;
    valori[4]=10;
    valori[5]=12;
    double m = media(valori, n);
    double v = varianza(valori, n);
    free(valori);
}