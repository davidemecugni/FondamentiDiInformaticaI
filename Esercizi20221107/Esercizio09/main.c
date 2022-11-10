#include <stdlib.h>

void potenza(double *d, int t){
    double temp = *d;
    if(*d == 0.0 && t == 0){
        *d = -1;
        return ;
    }
    if(t==0){
        *d = 1.0;
        return;
    }

    for(int i=0;i<t-1;i++){
        temp *= *d;
    }
    *d = temp;
}
int main(void)
{
    double a[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
    size_t i, n = 10;
    for (i = 0; i < n; ++i) {
        double d = a[i];
        potenza(&d, i);
        a[i] = d;
    }
    return 0;
}