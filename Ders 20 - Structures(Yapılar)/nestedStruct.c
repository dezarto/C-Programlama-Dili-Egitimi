#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// Yöntem 1

//struct adres {
//	char sehir[15];
//	char ilce[15];
//	int postaKodu;
//};
//
//struct araba {
//	char marka[10];
//	char model[10];
//	int yil;
//	char vites;
//};
//
//struct arabaKirala {
//	struct adres a1;
//	struct araba c1;
//}araba2, araba3 = { "Istanbul","Zeytinburnu", 82000, "Toyota", "Hilux", 2020, 'm' };

// Yöntem 2

struct adres {
	char sehir[15];
	char ilce[15];
	int postaKodu;
};

struct arabaKirala {
	struct adres a1;
	struct araba {
		char marka[10];
		char model[10];
		int yil;
		char vites;
	}c1;
}araba2, araba3 = { "Istanbul","Zeytinburnu", 82000, "Toyota", "Hilux", 2020, 'm' };

int main() {
	// Yöntem 1
	struct arabaKirala araba1;

	strcpy(araba1.a1.sehir, "Istanbul");
	strcpy(araba1.a1.ilce, "Bahcelievler");
	araba1.a1.postaKodu = 81000;
	
	strcpy(araba1.c1.marka, "Toyota");
	strcpy(araba1.c1.model, "Corolla");
	//strcpy(araba1.c1.vites, "o"); YANLIŞ
	araba1.c1.vites = 'o';
	araba1.c1.yil = 2022;

	printf("--- Araba Kiralama ---\n");
	printf("Araba Konumu 1: \n");
	printf("Sehir: %s\n", araba1.a1.sehir);
	printf("Ilce: %s\n", araba1.a1.ilce);
	printf("Posta kodu: %d\n", araba1.a1.postaKodu);
	printf("Marka: %s\n", araba1.c1.marka);
	printf("Model: %s\n", araba1.c1.model);
	printf("Vites: %c\n", araba1.c1.vites);
	printf("Yil: %d\n", araba1.c1.yil);
	printf("-------------------\n");
	
	// Yöntem 2

	strcpy(araba2.a1.sehir, "Istanbul");
	strcpy(araba2.a1.ilce, "Bahcelievler");
	araba2.a1.postaKodu = 81000;

	strcpy(araba2.c1.marka, "Toyota");
	strcpy(araba2.c1.model, "Corolla");
	araba2.c1.vites = 'o';
	araba2.c1.yil = 2022;

	printf("Araba Konumu 2: \n");
	printf("Sehir: %s\n", araba2.a1.sehir);
	printf("Ilce: %s\n", araba2.a1.ilce);
	printf("Posta kodu: %d\n", araba2.a1.postaKodu);
	printf("Marka: %s\n", araba2.c1.marka);
	printf("Model: %s\n", araba2.c1.model);
	printf("Vites: %c\n", araba2.c1.vites);
	printf("Yil: %d\n", araba2.c1.yil);
	printf("-------------------\n");

	// Yöntem 3

	printf("Araba Konumu 3: \n");
	printf("Sehir: %s\n", araba3.a1.sehir);
	printf("Ilce: %s\n", araba3.a1.ilce);
	printf("Posta kodu: %d\n", araba3.a1.postaKodu);
	printf("Marka: %s\n", araba3.c1.marka);
	printf("Model: %s\n", araba3.c1.model);
	printf("Vites: %c\n", araba3.c1.vites);
	printf("Yil: %d\n", araba3.c1.yil);
	printf("-------------------\n");

	return 0;
}