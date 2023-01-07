#include "path_split.h"

int main() {
	char** path = calloc(1,sizeof(char**)), ** filename = calloc(1, sizeof(char**));
	path_split("c:\\user\\esami\\FdI2017\\esercizi", path, filename);
	printf("%s\n", path[0]);
	printf("%s\n", filename[0]);
	return 0;
}