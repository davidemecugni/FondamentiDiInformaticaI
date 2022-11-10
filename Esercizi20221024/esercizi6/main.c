double sqrt(double n){
    double x = n, precn = n;
    do{
        precn=n;
        n = 0.5 * (n + x/n);
    }while(precn!= n);
    return n;
}

double discriminante (double a, double b, double c) {
    double delta= b*b-4*a*c;
    if(delta<0.0)
        return -1;
    if(delta==0.0)
        return 0;
    return sqrt(delta);
    
}

int soluzioni(double a, double b, double c, double *x1, double *x2) {
    double disc = discriminante(a,b,c);
    if(disc==-1){
        return 0;
    }
    if(disc==0){
        return 1;
    }
    *x1 = (-b + disc)/(2*a);
    *x2 = (-b - disc)/(2*a);
    return 2;
}

int main(void){
    double x1,x2;
    double *px1=&x1;
    double *px2=&x2;

    soluzioni(1.0,-1.0,-6.0,px1,px2);
    return 0;
}