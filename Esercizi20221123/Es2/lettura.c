#include "lettura.h"
#define _CRT_SECURE_NO_WARNINGS
/*
void littleEndianToBigEndian(int* number) {
	int tmp = 0;
	for (int i = 0; i < 4; i++) {
		tmp += *number & 0x000000FF;
		if (i == 3)
			continue;
		tmp <<= 8;
		*number >>= 8;
	}
	number = &tmp;
}
*/
int* leggiinteri(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return NULL;
	size_t intLenght;
	size_t r = 0;
	r = fread(&intLenght, sizeof(unsigned int), 1, f);
	if (r != 1) {
		fclose(f);
		return NULL;
	}
	*size = intLenght;
	int* numbers = (int*)malloc(sizeof(int) * (*size));
	if (numbers == NULL) {
		fclose(f);
		return NULL;
	}
	int temp = 0;
	for (unsigned int i = 0; i < *size; i++) {
		 r = fread(&temp, sizeof(int), 1, f);
		 if (r != 1) {
			 free(numbers);
			 fclose(f);
			 return NULL;
		 }
		numbers[i] = temp;
	}
	fclose(f);
	return numbers;
}

