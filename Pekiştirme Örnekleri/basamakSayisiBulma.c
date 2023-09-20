#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int basamakSayisiBulma(int _sayi);

int main() {
	int sayi;

	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);

	printf("\nGirilen sayi %d basamaklidir.\n", basamakSayisiBulma(sayi));

	return 0;
}

int basamakSayisiBulma(int _sayi) {
	int basamak_sayisi = 0;

	if (_sayi == 0) {
		return 1;
	}
	else {
		while (_sayi != 0)
		{
			_sayi /= 10;
			basamak_sayisi++;
		}
		return basamak_sayisi;
	}
}