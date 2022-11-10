#include <stdio.h>

extern unsigned int inverti (unsigned int i){
    int reversed = 0;
    while(i>0){
        reversed += i % 10;
        reversed *= 10;
        i /= 10;
    }
    return reversed/10;
}

