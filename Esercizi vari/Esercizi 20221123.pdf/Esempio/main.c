#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x = 266;
	char s[] = "prova";
	FILE* f;
	f = fopen("out1", "w");
	fprintf(f, "%i\n%s", x, s);
	fclose(f);
	f = fopen("out2", "wb");
	fprintf(f, "%i\n%s", x, s);
	fclose(f);
	f = fopen("out3", "w");
	fwrite(&x, sizeof x, 1, f);
	fwrite(&s, sizeof s, 1, f);
	fclose(f);
	f = fopen("out4", "wb");
	fwrite(&x, sizeof x, 1, f);
	fwrite(&s, sizeof s, 1, f);
	fclose(f);
	return 0;
}