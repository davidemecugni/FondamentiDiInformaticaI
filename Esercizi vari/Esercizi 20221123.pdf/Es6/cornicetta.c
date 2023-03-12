#include <string.h>
#include <stdio.h>
void stampa_cornicetta(const char* s) {
	const size_t len = strlen(s);
	for (size_t j = 0; j < 3; j++) {
		for (size_t i = 0; i < len + 2; i++) {
			if (i == 0) {
				switch (j)
				{
				case 0:
					printf("/");
					break;
				case 1:
					printf("|");
					break;
				case 2:
					printf("\\");
					break;
				default:
					break;
				}
				continue;
			}
			if (i == len + 1) {
				switch (j)
				{
				case 0:
					printf("\\");
					break;
				case 1:
					printf("|");
					break;
				case 2:
					printf("/");
					break;
				default:
					break;
				}
				continue;
			}
			switch (j)
			{
			case 1:
				printf("%c", s[i - 1]);
				break;
			default:
				printf("-");
				break;
			}
			
		}
		printf("\n");
	}
	printf("\n");
}