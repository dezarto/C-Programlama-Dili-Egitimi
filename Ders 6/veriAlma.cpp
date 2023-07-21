#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	printf() = ekrana bastırma
	scanf() = kullanıcıdan veri alma
*/

int main() {

	/*
	int yas;

	printf("Yas giriniz: ");
	scanf("%d", &yas);

	printf("Girilen yas: %d", yas);
	*/

	float kilo;

	printf("Lutfen alacaginiz kiloyu giriniz: ");
	scanf("%f", &kilo);

	printf("Girilen kilo: %.2f", kilo);

	return 0;
}