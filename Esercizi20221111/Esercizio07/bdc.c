unsigned short bin2bcd(unsigned short val) {
	if (val > 9999)
		return 0xFFFF;
	unsigned short risultato = 0x0, supporto = 0x0, ciclo = 0;
	while (val > 0){
		supporto = val % 10;
		risultato += supporto<<(4*ciclo);
		val /= 10;
		++ciclo;
	}
	return risultato;
}