void swap(unsigned int *a, unsigned int *b){
    unsigned int tmp =*a;
    *a=*b;
    *b=tmp;
}

unsigned int MCD (unsigned int m, unsigned int n) {
if (m == 0 || n == 0)
return 0;
while (m != n) {
if (m < n) {
unsigned int t = m;
m = n;
n = t;
}
m -= n;
}
return m;
}

