#include <stdlib.h>
#include <stdint.h>

extern void copy(uint32_t *dst, uint32_t *src, size_t n){
    for(int i=0;i<n;i++){
        dst[i]=src[i];
    }
}

int main(void){
    int n=5;
    u_int32_t *a = malloc(n*sizeof(uint32_t));
    u_int32_t *a_copy = malloc(n*sizeof(uint32_t));
    a[0]=3,a[1]=1,a[2]=4,a[3]=1,a[4]=5;
    copy(a_copy,a,n);
    free(a);
    free(a_copy);
    return 0;
}