#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

void unita(char* sz, unsigned int i) {
	unsigned int unita = i % 10;
	switch (unita) {
	case 1:
		sz[strlen(sz) - 1] = '\0';
		strcat(sz, "uno");
		break;
	case 2:
		strcat(sz, "due");
		break;
	case 3:
		strcat(sz, "tre");
		break;
	case 4:
		strcat(sz, "quattro");
		break;
	case 5:
		strcat(sz, "cinque");
		break;
	case 6:
		strcat(sz, "sei");
		break;
	case 7:
		strcat(sz, "sette");
		break;
	case 8:
		sz[strlen(sz )-1] = '\0';
		strcat(sz, "otto");
		break;
	case 9:
		strcat(sz, "nove");
		break;
	default:
		break;
	}
}

void decine(char* sz, unsigned int i) {
	unsigned int decine = i - (i/100)*100 - (i%10);
	switch (decine) {
	case 10:
		strcat(sz, "venti");
		unita(sz, i);
		break;
	case 20:
		strcat(sz, "venti");
		unita(sz, i);
		break;
	case 30:
		strcat(sz, "trenta");
		unita(sz, i);
		break;
	case 40:
		strcat(sz, "quaranta");
		unita(sz, i);
		break;
	case 50:
		strcat(sz, "cinquanta");
		unita(sz, i);
		break;
	case 60:
		strcat(sz, "sessanta");
		unita(sz, i);
		break;
	case 70:
		strcat(sz, "settanta");
		unita(sz, i);
		break;
	case 80:
		strcat(sz, "ottanta");
		unita(sz, i);
		break;
	case 90:
		strcat(sz, "novanta");
		unita(sz, i);
		break;
	default:
		unita(sz, i);
		break;
	}
}
extern void a_parole_1_999(char* sz, unsigned int i) {
	if (i < 1 || i > 999) {
		strcpy(sz,"");
		return;
	}
	switch (i) {
			case 1:
				strcpy(sz, "uno");
				break;
			case 2:
				strcpy(sz, "due");
				break;
			case 3:
				strcpy(sz, "tre");
				break;
			case 4:
				strcpy(sz, "quattro");
				break;
			case 5:
				strcpy(sz, "cinque");
				break;
			case 6:
				strcpy(sz, "sei");
				break;
			case 7:
				strcpy(sz, "sette");
				break;
			case 8:
				strcpy(sz, "otto");
				break;
			case 9:
				strcpy(sz, "nove");
				break;
			case 10:
				strcpy(sz, "dieci");
				break;
			case 11:
				strcpy(sz, "undici");
				break;
			case 12:
				strcpy(sz, "dodici");
				break;
			case 13:
				strcpy(sz, "tredici");
				break;
			case 14:
				strcpy(sz, "quattordici");
				break;
			case 15:
				strcpy(sz, "quindici");
				break;
			case 16:
				strcpy(sz, "sedici");
				break;
			case 17:
				strcpy(sz, "diciassette");
				break;
			case 18:
				strcpy(sz, "diciotto");
				break;
			case 19:
				strcpy(sz, "diciannove");
				break;
			
	}
	switch ((i / 10) * 10) {
		case 20:
			strcpy(sz, "venti");
			unita(sz, i);
			break;
		case 30:
			strcpy(sz, "trenta");
			unita(sz, i);
			break;
		case 40:
			strcpy(sz, "quaranta");
			unita(sz, i);
			break;
		case 50:
			strcpy(sz, "cinquanta");
			unita(sz, i);
			break;
		case 60:
			strcpy(sz, "sessanta");
			unita(sz, i);
			break;
		case 70:
			strcpy(sz, "settanta");
			unita(sz, i);
			break;
		case 80:
			strcpy(sz, "ottanta");
			unita(sz, i);
			break;
		case 90:
			strcpy(sz, "novanta");
			unita(sz, i);
			break;
		default:
			break;
	}
	switch ((i / 100) * 100) {
			case 100:
				strcpy(sz, "cento");
				decine(sz, i);
				break;
			case 200:
				strcpy(sz, "duecento");
				decine(sz, i);
				break;
			case 300:
				strcpy(sz, "trecento");
				decine(sz, i);
				break;
			case 400:
				strcpy(sz, "quattrocento");
				decine(sz, i);
				break;
			case 500:
				strcpy(sz, "cinquecento");
				decine(sz, i);
				break;
			case 600:
				strcpy(sz, "seicento");
				decine(sz, i);
				break;
			case 700:
				strcpy(sz, "settecento");
				decine(sz, i);
				break;
			case 800:
				strcpy(sz, "ottocento");
				decine(sz, i);
				break;
			case 900:
				strcpy(sz, "novecento");
				decine(sz, i);
				break;
			}
}
