
unsigned int somma_cifre(unsigned int x) {
    int somma=0;
    while(x>0){
        somma+=x%10;
        x/=10;
    }
    return somma;
}

int main(void){
    int x = somma_cifre(1234);
    return 0;
}