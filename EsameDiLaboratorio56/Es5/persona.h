#if !defined PERSONA_H
#define _CRT_SECURE_NO_WARNINGS
#define PERSONA_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct persona {
    int anni;
    char nome[50];
};
extern struct persona* leggi_persone(const char* filename, size_t* size);
#endif /*PERSONA_H*/