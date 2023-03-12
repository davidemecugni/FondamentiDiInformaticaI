#if !defined IMAGE_H
#define IMAGE_H
#include <stdint.h> // Per avere uint8_t
#include <stdlib.h>
struct image {
    size_t rows, cols;
    uint8_t* data;
};
extern struct image* image_doublesize(const struct image* img);
#endif /*IMAGE_H*/