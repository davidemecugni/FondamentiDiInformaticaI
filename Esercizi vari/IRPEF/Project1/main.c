int main(void) {
	int scaglioni[]={ 0, 15000, 28000, 55000, 75000 };
	int aliquote[] = {23, 27, 38, 41, 43};
	unsigned int ris =  irpef(25000, scaglioni, aliquote, 5);
	return 0;
}