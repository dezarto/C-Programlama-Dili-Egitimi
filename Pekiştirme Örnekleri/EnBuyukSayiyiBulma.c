#include<stdio.h>

int enBuyukSayiyiBulma(int _sayilar[], int size) {
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (_sayilar[i] > max) {
			max = _sayilar[i];
		}
	}
	return max;
}

int main() {

	int sayilar[5] = { 12,5,47,83,1 };

	printf("En buyuk sayi %d ", enBuyukSayiyiBulma(sayilar, 5));

	return 0;
}