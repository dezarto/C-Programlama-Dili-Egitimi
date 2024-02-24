#include <stdio.h>

// 3. Kısım

int* pointerDondur();

int main() {

	int* sayi;

	sayi = pointerDondur();

	printf("sayi: %d\n", *sayi);
	printf("sayi: %p", sayi);

	return 0;
}

int* pointerDondur() {
	int a = 20;
	return &a;
}


// 2. Kısım

//void swap(int *s1, int *s2);
//
//int main() {
//
//	int a = 5, b = 10;
//
//	printf("Oncesi\na: %d", a);
//	printf("b: %d\n", b);
//
//	swap(&a, &b);
//
//	printf("Sonrasi\na: %d", a);
//	printf("b: %d\n", b);
//
//	return 0;
//}
//
//void swap(int* s1, int* s2) {
//	int araHafiza;
//	araHafiza = *s1;
//	*s1 = *s2;
//	*s2 = araHafiza;
//}


// 1. Kısım

//void degerDegistir(int *ptr);
//
//int main() {
//    int sayi = 10;
//    int* sayi_ptr = &sayi;
//
//    printf("Once: %d\n", sayi);
//    degerDegistir(sayi_ptr);
//    printf("Sonra: %d\n", sayi);
//
//    return 0;
//}
//
//void degerDegistir(int* ptr) {
//    *ptr = 15;
//}

