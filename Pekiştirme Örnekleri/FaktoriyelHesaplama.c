#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Faktöriyel Hesaplama
//
// 4! = 4x3x2x1

int faktoriyel(int sayi) {
	if (sayi == 0) {
		return 1;
	}
	else if (sayi < 0) {
		printf("Lutfen sifirdan buyuk bir degere giriniz!");
		return 0;
	}
	else {
		int sonuc = 1;
		for (int i = 1; i <= sayi; i++)
		{
			sonuc *= i;
		}
		return sonuc;
	}
}

int main() {
	int sayi;
	printf("Fakoriyel hesablamak icin lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);

	printf("%d Faktoriyel sonucunuz: %d",sayi ,faktoriyel(sayi));

	return 0;
}