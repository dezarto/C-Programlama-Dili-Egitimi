#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
* 
*	Syntax
*	ptr = (veri-tipi*)realloc(ptr, yeniBoyut);
*	ptr = (veri-tipi*)calloc(n, elementBoyutu);
* 
*/

int main() {

	int* ptr, n;

	printf("Lutfen boyutu giriniz: ");
	scanf("%d", &n);
	printf("Girilen boyut miktari: %d\n", n);

	ptr = (int*)calloc(n, sizeof(int));

	if (ptr == NULL) {
		printf("Alan tahsisi basarisiz!");
		exit(0);
	}
	else {
		for (int i = 0; i < n; i++)
		{
			ptr[i] = i + 1;
		}

		printf("Girdiginiz elemanlar: ");
		for (int i = 0; i < n; i++)
		{
			printf(" %d", ptr[i]);
		}
		/*--------------------------------------------*/
		printf("\nLutfen YENI boyutu giriniz: ");
		scanf("%d", &n);
		printf("Girilen YENI boyut miktari: %d\n", n);

		ptr = (int*)realloc(ptr, n * sizeof(int));
		//ptr = (int*)malloc(n * sizeof(int)); ÖRNEK

		for (int i = 0; i < n; i++)
		{
			ptr[i] = i + 1;
		}

		printf("YENI girdiginiz elemanlar: ");
		for (int i = 0; i < n; i++)
		{
			printf(" %d", ptr[i]);
		}

		free(ptr);
	}

	return 0;
}