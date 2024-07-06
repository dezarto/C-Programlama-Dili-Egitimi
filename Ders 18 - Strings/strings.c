#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

/*
*	String Fonksiyonları
* 
*	strlen(par1); // par1 in uzunluğunu verir
*	strcpy(par1, par2); // par2 yi par1 e kopyalar
*	strcat(par1, par2); // par2 yi par1 e sağdan ekler
*/

int main() {

	char test1[14] = "Merhaba";
	char test2[] = " Dunya";

	strcat(test1, test2);

	printf("Test1: %s\n", test1);
	printf("Test2: %s\n", test2);

	/*strcpy(test1, test2);

	printf("Test1: %s\n", test1);
	printf("Test2: %s", test2);*/

	/*char test[] = "merhaba";

	printf("Karakter: %s\n", test);
	printf("Karakter miktari 1: %d\n", strlen(test));
	printf("Karakter miktari 2: %d\n", sizeof(test));*/

	return 0;
}