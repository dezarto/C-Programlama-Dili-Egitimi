#include<stdio.h>

/*
*	Local ve Global Değişken Tanımlama
* 
*	
*	Local: Bulunduğu alanda geçerli.
*	
*	Global: Her yerde geçerli.
* 
*/

int a = 10; //global

int main() {

	//int a = 10; //fonksiyon içi global - fonksiyonlar arası local
	
	printf("a: %d\n", a);

	if (a > 1) {
		int b = 5; // local
		printf("b: %d\n", b);
		printf("a: %d\n", a);
	}

	//printf("b: %d\n", b);

	test();

	return 0;
}

int test() {

	printf("test a: %d\n", a);

	return 0;
}