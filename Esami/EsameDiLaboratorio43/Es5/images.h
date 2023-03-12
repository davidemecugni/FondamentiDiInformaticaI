#define _CRT_SECURE_NO_WARNINGS
#if !defined IMAGES_H
#define IMAGES_H
#include <stdlib.h>
#include <stdio.h>
struct image {
    char name[255];
    size_t height, width;
};

extern struct image* read_images(const char* filename, size_t* n);
#endif /*IMAGES_H*/