double sqrt(double n){
    double x = n;
    for(int i=0;i<10;i++){
        n = 0.5 * (n + x/n);
    }
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


int main(void){
    double x = discriminante(1.0,4.0,1.0);
    return 0;
}