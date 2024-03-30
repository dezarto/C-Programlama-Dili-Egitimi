// Call by Reference
#include <stdio.h>

void swap(int *x, int *y) {
	int tampon;

	tampon = *x;
	*x = *y;
	*y = tampon;

	printf("Fonksiyon ici\na: %d\n b: %d\n", *x, *y);
}

int main()
{
	int a = 5, b = 10;

	swap(&a, &b);
	printf("a: %d\n b: %d", a, b);

	return 0;
}