#include <stdlib.h>
#include <stdint.h>

extern void iota(uint32_t *x, size_t n){
    for(int i=0;i<n;i++){
        x[i]=i;
    }
}

int main(void){
    int n=20;
    u_int32_t *a = malloc(n*sizeof(uint32_t));
    iota(a,n);
    free(a);
    return 0;
}