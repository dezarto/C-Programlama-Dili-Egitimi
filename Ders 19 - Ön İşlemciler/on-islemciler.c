#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MIN 10
#define DEBUG 100
#define CIFT(n) ((n)%2 == 0)

int main() {
	int number, test[MIN];
	printf("Sayi gir: ");
	scanf("%d", &number);


	if (CIFT(number)) {
		printf("Sayi cifttir.");
	}
	else {
		printf("Sayi tektir.");
	}


#if DEBUG == 1
	if (MIN > number) {
		printf("Sayi minimum degerden kucuk...");
	}
	else {
		printf("Sayi minimum degerden buyuk...");
	}
#endif

#if DEBUG > 10
	printf("Debug 10 dan buyuk");
#elif DEBUG < 5
	printf("Debug 5 ten kucuk");
#endif

	printf("devam etti...");
	return 0;
}