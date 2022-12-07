unsigned int inverti(unsigned int i) {
	unsigned int inverted=0;
	while (i > 0) {
		inverted *= 10;
		inverted += (i % 10);
		i /= 10;
	}
	return inverted;
}