int felice(unsigned int num) {
	unsigned int res = 0;
	if (num == 1 || num == 7 || num == 13 || num == 19) {
		return 1;
	}
	if (num == 0 || num == 2 || num == 3|| num == 4 || num == 5 || num == 6 || num == 8) {
		return 0;
	}
	while (num != 0) {
		res += (num % 10) * (num % 10);
		num /= 10;
	}
	return felice(res);
}