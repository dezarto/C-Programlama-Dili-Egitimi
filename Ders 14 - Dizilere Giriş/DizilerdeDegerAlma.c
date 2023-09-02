#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	/*int sayilar[4];

	sayilar[0] = 4;
	sayilar[1] = 9;
	sayilar[2] = 12;
	sayilar[3] = 0;

	for (int i = 0; i < 4; i++)
	{
		printf("%d. sayi: %d\n", i + 1, sayilar[i]);
	}*/

	int sayilar[5];

	for (int i = 0; i < 5; i++)
	{
		printf("%d. sayi giriniz:", i + 1);
		scanf("%d", &sayilar[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d. sayi: %d\n", i + 1, sayilar[i]);
	}

	return 0;
}