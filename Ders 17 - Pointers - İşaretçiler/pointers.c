#define _CRT_SCURE_NO_WARNINGS
#include<stdio.h>

/*
	İşaretçiler (Pointers)
	'&' adres'i gösterir
	'*'	adresteki değeri gosterir

*/
int main() {
	int a = 5, *b;
	//int* b;
	
	b = &a;

	printf("a adresi: %p\n",& a);
	printf("b adresi: %p\n", b);
	printf("a deger: %d\n", a);
	printf("a deger: %d\n", *b);

	*b = *b + 2;

	printf("a yeni deger: %d\n", a);
	printf("a yeni deger: %d\n", *b);

	return 0;
}