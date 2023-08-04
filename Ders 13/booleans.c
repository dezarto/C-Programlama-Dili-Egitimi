#include<stdio.h>
#include<stdbool.h>

/*
*		Booleans
*
*		true = 1
*		false = 0
*
*		Kütüphane
*
*		#include <stdbool.h>
*
*		Örnek Kullanım
*
*		bool değişkenİsmi = true;
*		bool değişkenİsmi = false;
*/

int main() {
	bool istenen = false;
	int a = 5;

	/*bool dogruluk = true;
	bool yanlis = false;*/

	/*printf("True: %d\n", dogruluk);
	printf("False: %d", yanlis);*/

	printf("Baslangic: %d\n", istenen);
	if (a < 10) {
		istenen = true;
		printf("Bitis: %d\n", istenen);
	}

	return 0;
}