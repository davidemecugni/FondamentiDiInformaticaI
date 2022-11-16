void encrypt(char* s, unsigned int n) {
	for (int i = 0; i < n; i++) {
		s[i] ^= 0xAA;
	}
}
int main(void) {
	char e[] = "Parmigiano Reggiano";
	encrypt(e, 20);
	encrypt(e, 20);
	return 0;
}