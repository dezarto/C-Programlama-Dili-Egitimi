#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//char isim[] = "Adem";
	/*char isim[] = { 'A','d','e','m'};

	printf("Isim: %c", isim[1]);*/

	//printf("Isim: %s", isim);
	//printf("Harf: %c", isim[1]);

	//char isim[16];

	//printf("Lutfen isim girin: ");
	//scanf("%s", &isim); //semir

	//printf("Girilen isim: %c", isim[1]);

	char harf[4]; 

	printf("Karakter girin: ");
	scanf("%s", &harf);

	printf("Girilen karakter: %c", harf[2]);

	return 0;
}