#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
*	scanf("format1", &değişken1);
* 
*	scanf("format1 format2...", &değişken1, &değişken2...);
* 
*	Format	Açıklama
* 
*	%d	  : Tam sayı : int
*	%f	  : Ondalıklı sayı : float
*	%c	  : Karakter : char
*	%s	  : Dizi (karakter dizisi)
*	%lf	  : Çift hassasiyetli ondalıklı sayı (double türü için) : double
* 
*/

int main() {

	int a, b;
	printf("Iki sayi giriniz: ");
	scanf("%d %d", &a, &b);

	printf("Birinci sayi: %d\nIkinci  sayi: %d\n", a, b);

	return 0;
}