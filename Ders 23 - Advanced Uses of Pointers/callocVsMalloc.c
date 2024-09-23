﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> // Dinamik Bellek Tahsisi Fonksiyonları

/*
*	Syntax
*	ptr = (veri tipi*) malloc(byte-size)
*	ptr = (veri tipi*) calloc(miktar, byte-size)
* 
*	Örnek
*	ptr = (int*) malloc(100 * sizeof(int));
*	ptr = (int*) calloc(100, sizeof(int))	
* 
*/

int main() {

	int* ptr;
	int n;

	printf("Lutfen eleman sayisini girin: ");
	scanf("%d", &n);
	printf("Girdiginiz deger: %d", n);

	//ptr = (int*)malloc(n * sizeof(int)); MALLOC
	ptr = (int*)calloc(n, sizeof(int)); // CALLOC

	if (ptr == NULL) {
		printf("Bellekten alan tahsisi basarisiz!");
		exit(0);
	}
	else {
		/*for (int i = 0; i < n; i++)
		{
			ptr[i] = i + 1;
		}*/

		printf("\nGirilen degerler:");
		for (int i = 0; i < n; i++)
		{
			printf("%d, ", ptr[i]);
		}

		free(ptr); // bellekten tahsis edilen alanı özgür bırakır
	}

	return 0;
}