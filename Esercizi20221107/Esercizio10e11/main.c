#include <stdlib.h>

void potenza(double *d, int t){
    double temp;
    temp = d[t];
    if(d[t] == 0.0 && t == 0){
        d[t] = -1;
        return ;
    }
    if(t==0){
        d[t] = 1.0;
        return;
    }

    for(int i=0;i<t-1;i++){
        temp *= d[t];
    }
    d[t] = temp;
    
}
int main(void)
{
    double a[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
    size_t i, n = 10;
    for (i = 0; i < n; ++i) {
        potenza(a, i);
    }
    return 0;
}