#include<stdio.h>

/*
*	Değişken nasıl tanımlanır ?
* 
*	veriTipi degiskenIsmi = degiskeneAtanacakDeger;
*	veriTipi degiskenIsmi;
* 
*	int puan = 88;
* 
*******************************************************
*	
*	Değişkenler nasıl tanımlanmalıdır ?
* 
*	1. Değişken isimleri anlamlı olmalı
*	2. Türkçe karakter kullanmayın
*	3. Uygun veri türü kullanın (int, float, double, char)
*	4. Değişkenler rakamlarla başlamaz // int 1sayi;
* 
********************************************************
*	Örnek kullanım,
* 
*	int sayi;
*	int toplamSonucMiktari;
*	int toplam_sonuc;
*	int _sayi;
*	int sayi2;
*/


int main() {

	int sayi = 10;
	int toplamSonucMiktari = 12;
	int toplam_sonuc = 14;
	int _sayi = 16;
	int sayi2 = 18;

	printf("sayi: %d\n", sayi);
	printf("toplamSonucMiktari: %d\n", toplamSonucMiktari);
	printf("toplam_sonuc: %d\n", toplam_sonuc);
	printf("_sayi: %d\n", _sayi);
	printf("sayi2: %d\n", sayi2);

	return 0;
}