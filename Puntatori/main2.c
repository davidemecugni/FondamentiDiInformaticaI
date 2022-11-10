int main(void){
    char x = -27;
    char *p = &x;
    int b;

    *p = -80;
    b = x;
    return 0;
}