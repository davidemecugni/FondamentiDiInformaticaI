
int primo (unsigned int val) {
    if(val<2){
    return  -1;
    }
    if(val==2){
    return 1;
    }
    for(int i=2;i<val/2;i++){
        if(!(val%i))
        return 0;
    }
    return 1;
}

unsigned int prossimo_numero_primo(unsigned int x) {
    while(1){
        x+=1;
        if(primo(x)==1){
            return x;
        }
    }
}

int main(void){
    unsigned int x = prossimo_numero_primo(991);
    return 0;
}