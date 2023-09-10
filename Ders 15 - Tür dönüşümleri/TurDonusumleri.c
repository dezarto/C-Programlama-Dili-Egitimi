#include<stdio.h>
#include<stdbool.h>

/*
*   Soldan sağa doğru otomatik dönüşüm
*   
*   bool --> char --> short int --> int --> unsigned int --> long -
*   -> unsigned --> long long --> float --> double --> long double
* 
* 
*   Manuel Dönüşüm
* 
*   (tür)İfade 
*/

int main() {
	// Otomatik Tür Dönüşümü
	//bool a = false;  // True = 1, Flase = 0
	//int b = 5;

	//b = b + a;

	/*int a = 5;
	float b = 6.4;

	b = b + a;

	printf("Sonuc: %f", b);*/

	//manuel tür dönüşümü char-->int
	/*char harf = 'a';

	printf("harf: %f", (float)harf);*/

	double a = 12.345;
	int b = 6;

	printf("Sonuc: %lf", (a * 2) + ((double)b / 2.4));

	return 0;
}