#include "image.h"

struct image* image_doublesize(const struct image* img){
	struct image* res = calloc(1,sizeof(struct image));
	res->cols = img->cols * 2;
	res->rows = img->rows * 2;
	res->data = calloc(res->cols * res->rows, sizeof(uint8_t));
	for (size_t row = 0; row < res->rows; row++) {
		for (size_t col = 0; col < res->cols; col++) {
			res->data[row * res->cols + col] = img->data[(row / 2) * img->cols + (col / 2)];
		}
	}
	return res;
}