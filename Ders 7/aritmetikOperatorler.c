#include<stdio.h>

/*
******* Aritmetik Operatörler ***********
*
*	( + ) Toplama Operatörü
*	( – ) Çıkarma Operatörü
*	( * ) Çarpma Operatörü
*	( / ) Bölme Operatörü
*	( % ) Kalan Operatörü
*	( ++ ) Arttırma Operatörü
*	( -- ) Azaltma Operatörü
* 
*****************************************
*/

int main() {

	int sayi1 = 10, sayi2 = 3, sonuc;

	/***Toplama İşlemi***/

	//sonuc = sayi1 + sayi2;
	
	//printf("Toplama sonucumuz: %d", sonuc);

	/***Çıkarma İşlemi***/

	//sonuc = sayi1 - sayi2;

	//printf("Cıkartma sonucumuz: %d", sonuc);

	/***Çarpma İşlemi***/

	//sonuc = sayi1 * sayi2;

	//printf("Carpma sonucumuz: %d", sonuc);

	/***Bölme İşlemi***/

	//sonuc = sayi1 / sayi2; // 10/3 = 3.???

	//printf("Bolme sonucumuz: %d", sonuc);

	/***Modül Operatörü***/

	//sonuc = sayi1 % sayi2;  // 10/3 = kalan

	//printf("Kalan sonucumuz: %d", sonuc);

	/***Arttırma Operatörü***/

	//sayi1++;  // 10 => 11
	//sayi2++; // 3 => 4

	//printf("Sayi1: %d Sayi2: %d", sayi1, sayi2);

	/***Azaltma Operatörü***/

	sayi1--; // 10 => 9
	sayi2--; // 3 => 2

	printf("Sayi1: %d Sayi2: %d", sayi1, sayi2);

	return 0;
}