#define _CRT_SECURE_NO_WARNINGS
#if !defined CONFIG_H
#define CONFIG_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>
#include <string.h>

struct keyval {
    char k[256];
    char v[256];
};

extern struct keyval* read_config(const char* filename, size_t* n);
#endif /*CONFIG_H*/