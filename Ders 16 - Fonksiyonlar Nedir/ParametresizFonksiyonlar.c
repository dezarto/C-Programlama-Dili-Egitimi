#include<stdio.h>

// Parametresiz fonksiyonlar

void Merhaba() {
	printf("MerhabaDunya!");
}

int topla() {
	int a = 5, b = 7, toplam;
	toplam = a + b;

	return toplam;
}

int main() {
	int sonuc;
	//Merhaba();

	//sonuc = topla();

	printf("sonuc: %d", topla());

	return 0;
}