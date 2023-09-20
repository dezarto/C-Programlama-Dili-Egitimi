#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void carpimTablosu() {
	printf("Carpim Tablosu: \n");
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}
}

void carpimTablosuDegerAlma(int sutun, int satir);

int main() {
	int sayi1, sayi2;
	//carpimTablosu();

	printf("Lutfen satir ve stun sayisini belirtilen formatta girin (Satir-Stun): ");
	scanf("%d-%d", &sayi1, &sayi2);

	carpimTablosuDegerAlma(sayi1, sayi2);

	return 0;
}

void carpimTablosuDegerAlma(int satir, int sutun) {
	printf("Carpim Tablosu: \n");
	for (int i = 0; i <= satir; i++)
	{
		for (int j = 0; j <= sutun; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}
}