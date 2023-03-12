#include "html.h"
int rimuovi_html(const char* filein, const char* fileout) {
	FILE* fin = fopen(filein, "r");
	if (fin == NULL) {
		return -1;
	}
	FILE* fout = fopen(fileout, "w");
	if (fout == NULL) {
		fclose(fin);
		return -1;
	}
	int read=0, putcSuccess=0;
	int intag = 0;
	long long unsigned caratteriscritti = 0;
	while (feof(fin) == 0) {
		read = fgetc(fin);
		if (read == EOF) {
			break;
		}
		if ((char)read == '<') {
			intag = 1;
		}
		if ((char)read == '>' && intag == 1) {
			intag = 0;
			continue;
		}
		if (intag == 1 && (char)read == '\n') {
			fclose(fin);
			fclose(fout);
			return -1;
		}
		if (intag == 0) {
			putcSuccess = putc(read, fout);
			++caratteriscritti;
		}
	}
	fclose(fin);
	fclose(fout);
	if (caratteriscritti == 0 || intag==1) {
		return -1;
	}
	return 0;
}