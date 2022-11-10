int divisione(double a, double b, double *q) {
    if(b!=0.0){
        *q = a/b;
        return 1;
    }
    return 0;
}

int main(void){
    double x;
    double  *p=&x;
    divisione(15.3,3,p);
    return 0;
}