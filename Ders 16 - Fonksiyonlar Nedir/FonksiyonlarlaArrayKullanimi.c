#include<stdio.h>

// Fonksiyonlarla Array Kullanımı

int degerleriCarp(int a[],int size) {
	int carp = 1;
	for (int i = 0; i < size; i++)
	{
		carp *= a[i];
	}
	return carp;
}

void isminiz(char isim[], int yas) {
	printf("Hosgeldin, %s, Yasiniz: %d", isim, yas);
}

int main() {
	/*int sayilar[4] = {2,4,8,5};

	printf("Sonuc: %d", degerleriCarp(sayilar, 4));*/

	isminiz("Semir", 30);

	return 0;
}