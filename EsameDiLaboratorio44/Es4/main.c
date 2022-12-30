#include <string.h>
#include <stdlib.h>
extern void bad_word_filter(char* s, char** words, size_t nwords);
int main(void) {
	char* s = "sei un carciofo bello";
	char* words[]  = { "carciofo", "broccolo", "cavolfiore" };
	bad_word_filter(s, words, 3);
	return 0;
}
