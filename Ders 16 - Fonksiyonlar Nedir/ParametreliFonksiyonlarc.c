#include<stdio.h>

// Parametreli Fonksiyonlar

int topla(int a, int b) {
	int sonuc;

	sonuc = a + b;

	return sonuc;
}

int cikartma(int a, int b) {
	return a - b;
}

int carpma(int sayi1, int sayi2){
	return sayi1 * sayi2;
}

float bolme(float sayi1, float sayi2) {
	return sayi1 / sayi2;
}

int main() {

	//int hesapla;

	//hesapla = topla(12,5);

	//printf("Sonuc: %d", carpma(12,5));
	printf("Sonuc: %f", bolme(12,5));

	return 0;
}