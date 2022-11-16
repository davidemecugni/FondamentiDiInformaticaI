#include <stdlib.h>
char* converti(unsigned int n){
	if (n == 0 || n == NULL) {
		return NULL;
	}
	unsigned int size = 0;
	unsigned int copia_n = n;
	while (n > 0) {
		n /= 10;
		size++;
	}
	char* risultato = malloc(size * sizeof(char) + 1);
	risultato[size] = 0;
	for (int i = size; i > 0; i--) {
		risultato[size-i] = copia_n % 10 + '0';
		copia_n /= 10;
	}
	return risultato;
		
}
int main(void) {
	unsigned int num = 314159;
	char* c = converti(num);
	free(c);
	return 0;
}