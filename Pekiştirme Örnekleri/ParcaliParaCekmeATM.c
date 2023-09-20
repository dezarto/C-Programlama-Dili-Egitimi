#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*	Lütfen çekilecek miktarı girin: 93
*
*	20 Tl: 4
*	10 TL: 1
*	5 TL: 0
*	1 TL : 3
*/

void ekranaBastirma(int _yirmi, int _on, int _bes, int _bir);
void parcaliParaCekme(int para);

void parcaliParaCekme(int para) {
	int yirmi, on, bes, bir;

	yirmi = para / 20;
	on = (para - (yirmi * 20)) / 10;
	bes = (para - ((yirmi * 20) + (on * 10))) / 5;
	bir = para - ((yirmi * 20) + (on * 10) + (bes * 5));

	ekranaBastirma(yirmi, on, bes, bir);
}

void ekranaBastirma(int _yirmi, int _on, int _bes, int _bir) {
	printf("20 TL : %d\n", _yirmi);
	printf("10 TL : %d\n", _on);
	printf("5 TL : %d\n", _bes);
	printf("1 TL : %d\n", _bir);
}

int main() {

	int sayi;

	printf("Lutfen cekilecek miktarı girin: ");
	scanf("%d", &sayi);

	parcaliParaCekme(sayi);

	return 0;
}