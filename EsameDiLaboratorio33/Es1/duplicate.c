#include <stdbool.h>
bool cifre_duplicate(unsigned long long n) {
	int uno, due, tre, quattro, cinque,sei, sette, otto, nove, zero;
	uno = due = tre = quattro = cinque = sei =sette = otto = nove = zero = 0;
	while (n > 0) {
		switch (n % 10) {
		case 1:
			++uno;
			break;
		case 2:
			++due;
			break;
		case 3:
			++tre;
			break;
		case 4:
			++quattro;
			break;
		case 5:
			++cinque;
			break;
		case 6:
			++sei;
			break;
		case 7:
			++sette;
			break;
		case 8:
			++otto;
			break;
		case 9:
			++nove;
			break;
		case 0:
			++zero;
			break;
		}
		n /= 10;
	}
	return (uno > 1 || due > 1 || tre > 1 || quattro > 1 || cinque > 1 || sei > 1 || sette > 1 || otto > 1 || nove > 1 || zero > 1);
}