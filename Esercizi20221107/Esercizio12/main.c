#include <stdbool.h>

extern bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c){
    return (a*a + b*b) == c*c;
}

int main(void){
    bool x = is_terna_pitagorica(3,4,6);
    return 0;
}