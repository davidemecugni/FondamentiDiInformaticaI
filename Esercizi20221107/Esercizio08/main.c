#include <stdint.h>
#include <math.h>
#include <stdio.h>

double fattoriale(double x){
    if(x==0 || x==1){
        return 1.0;
    }
    return x*(fattoriale(x-1));
}

double calcola_seno(double x){
    double precval = x, val=0;
    int i=0;
    double alternating = 0;
    while(precval != val){
        precval = val;
        val +=   (pow(-1.0, i) /fattoriale(2*i + 1)) * pow(x, (double)(2 * i + 1));
        ++i;
    }
    return val;
}


int main(void){
    double x = calcola_seno(1.76);
    printf("%f\n\n",x);
    return 0;
}

