#if !defined RADICE_H
#define RADICE_H
double radq(double a) {
    double t, x = a;
    if (x<=0.)
    return 0.;
    do {
        t = x;
        x = 0.5*(t + a/t);
    } while (x!=t);
    return x;
}
#endif /* RADICE_H */