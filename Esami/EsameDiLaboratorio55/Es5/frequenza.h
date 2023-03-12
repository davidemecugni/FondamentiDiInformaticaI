#if !defined FREQUENZA_H
#define _CRT_SECURE_NO_WARNINGS
#define FREQUENZA_H
#include <stdlib.h>
#include <string.h>
struct freq {
    char* forma;
    char* colorenumero;
    int numero;
};
struct oggetto {
    char* forma;
    char* colorenumero;
};
struct carta {
    struct oggetto* disegni;
    size_t n;
};
extern struct oggetto* piu_frequente(const struct carta* c);
#endif /*FREQUENZA_H*/