unsigned int sqrt(int n){
    int x = n, precn = n;
    do{
        precn=n;
        n = (n + x/n)/2;
    }while(precn!= n);
    return n+1;
}
unsigned int primo (unsigned int val) {
    if(val<2){
    return  -1;
    }
    if(val==2){
    return 1;
    }
    for(int i=2;i<sqrt(val);i++){
        if(!(val%i))
        return 0;
    }
    return 1;
}

int main(void){
    unsigned int x = primo(23);
    return 0;
}