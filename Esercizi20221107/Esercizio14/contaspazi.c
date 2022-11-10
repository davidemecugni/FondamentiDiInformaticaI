int conta_spazi(const char* s) {
	int i = 0, spazi = 0;
	while (s[i] != '\0') {
		if (s[i] == ' ') {
			++spazi;		
		}
		++i;
	}
	return spazi;
}