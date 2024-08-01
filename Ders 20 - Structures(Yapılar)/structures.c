#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct bilgiler {
	int yariyil;
	float gno;
	char isim[15];
	char bolum[20];
}ogrenci3 = { 3, 2.50, "Hamza", "Bilgisayar Muh." }, ogrenci4;

int main() {
	// Yöntem 1
	struct bilgiler ogrenci1;

	ogrenci1.yariyil = 6;
	ogrenci1.gno = 3.10;
	//ogrenci1.isim = "Adem"; YANLIŞ
	strcpy(ogrenci1.isim, "Adem");
	//ogrenci1.bolum = "Bilgisayar Muh."; YANLIŞ
	strcpy(ogrenci1.bolum, "Bilgisayar Muh.");

	printf("Yariyil: %d\n", ogrenci1.yariyil);
	printf("GNO: %.2f\n", ogrenci1.gno);
	printf("Isim: %s\n", ogrenci1.isim);
	printf("Bolum: %s\n", ogrenci1.bolum);
	printf("----------------\n");
	// Yöntem 2

	struct bilgiler ogrenci2 = { 5, 2.80, "Enes", "Bilgisayar Muh." };

	printf("Yariyil: %d\n", ogrenci2.yariyil);
	printf("GNO: %.2f\n", ogrenci2.gno);
	printf("Isim: %s\n", ogrenci2.isim);
	printf("Bolum: %s\n", ogrenci2.bolum);
	printf("----------------\n");

	// Yöntem 3
	
	printf("Yariyil: %d\n", ogrenci3.yariyil);
	printf("GNO: %.2f\n", ogrenci3.gno);
	printf("Isim: %s\n", ogrenci3.isim);
	printf("Bolum: %s\n", ogrenci3.bolum);
	printf("----------------\n");

	// Yöntem 4

	ogrenci4.yariyil = 6;
	ogrenci4.gno = 3;
	strcpy(ogrenci4.isim, "Onur");
	strcpy(ogrenci4.bolum, "Bilgisayar Muh.");

	printf("Yariyil: %d\n", ogrenci4.yariyil);
	printf("GNO: %.2f\n", ogrenci4.gno);
	printf("Isim: %s\n", ogrenci4.isim);
	printf("Bolum: %s\n", ogrenci4.bolum);
	printf("----------------\n");

	// Verileri Güncelleme

	ogrenci1.yariyil = 7;
	ogrenci1.gno = 3.15;

	printf("Yariyil: %d\n", ogrenci1.yariyil);
	printf("GNO: %.2f\n", ogrenci1.gno);
	printf("Isim: %s\n", ogrenci1.isim);
	printf("Bolum: %s\n", ogrenci1.bolum);

	return 0;
}