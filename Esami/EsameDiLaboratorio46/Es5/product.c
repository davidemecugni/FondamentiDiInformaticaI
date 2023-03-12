#include "product.h"
void write_products(FILE* f, const struct product* list, size_t n) {
	if (f == NULL) {
		return;
	}
	fputc('[', f);

	fputc('\n', f);
	for (size_t i = 0; i < n; i++) {
		fprintf(f,"\t{\n");
		fprintf(f, "\t\t\"productId\": \"%s\",\n",list[i].productId);
		fprintf(f, "\t\t\"fullName\": \"%s\",\n", list[i].fullName);
		int copy = list[i].price,len=0;
		while (copy > 0) {
			len++;
			copy /= 10;
		}
		char* inttostring = calloc(len + 1,sizeof(char));
		sprintf(inttostring, "%d", list[i].price);
		fprintf(f, "\t\t\"price\": %s\n", inttostring);
		free(inttostring);
		if (i == n - 1) {
			fprintf(f, "\t}\n");
		}
		else {
			fprintf(f, "\t},\n");
		}
		
	}
	fputc(']', f);
}