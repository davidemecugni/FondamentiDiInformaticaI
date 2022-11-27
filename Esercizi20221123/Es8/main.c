extern int felice(unsigned int num);
int main(void) {
	int c[20];
	for (unsigned int i = 0; i < 20; i++) {
		c[i] = felice(i);
	}
	return 0;
}