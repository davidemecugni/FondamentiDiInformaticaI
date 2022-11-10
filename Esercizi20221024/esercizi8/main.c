double power(double x, int n){
    while(n!=1){
        x*=x;
        --n;
    }
    return x;
}

int fattoriale(int x){
    if(x==0 || x==1){
        return 1;
    }
    
    return fattoriale(x-1)*x;
}

double exp (double x){
    double prect=0, total;
    int i=0;
    do{
        prect=total;
        total+=(power(x,i)/fattoriale(i));
        ++i;
    }while(prect!=x);
    return x;
}

int main(void){
    double x = exp(2);
    return 0;
}