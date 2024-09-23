#include<stdio.h>

enum Level {
	KUCUK = 1,
	ORTA,
	BUYUK,
	COK_BUYUK
};

int main() {
	// Yöntem 1
	enum Level l1;
	l1 = ORTA;

	// Yöntem 2
	
	//enum Level l1 = KUCUK;

	printf("Level: %d\n", l1);

	switch (l1)
	{
	case KUCUK: printf("Kucuk boy icecek aldiniz.\n"); break;
	case ORTA: printf("Orta boy icecek aldiniz.\n"); break;
	case BUYUK: printf("Buyuk boy icecek aldiniz.\n"); break;
	case COK_BUYUK: printf("Cok Buyuk boy icecek aldiniz.\n"); break;
	default: printf("Gecersiz...\n");
		break;
	}


	return 0;
}