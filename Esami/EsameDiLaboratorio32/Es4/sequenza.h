#define _CRT_SECURE_NO_WARNINGS

#if !defined SEQUENZA_H
#define SEQUENZA_H
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
struct seq {
    size_t len;
    uint16_t* values;
};
extern bool seq_load(const char* filename, struct seq* s);
#endif /*SEQUENZA_H*/