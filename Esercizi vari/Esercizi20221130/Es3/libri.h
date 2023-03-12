#ifndef LIBRI_H
#define _CRT_SECURE_NO_WARNINGS
#define LIBRI_H
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct libro {
    char* titolo;
    uint16_t* anni_ristampe;
};
extern bool libro_scrivi(const struct libro* p, FILE* f);
#endif /*LIBRI_H*/
