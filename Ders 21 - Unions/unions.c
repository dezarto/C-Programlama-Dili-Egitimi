#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

union Veri {
	int i;
	float f;
	char str[20];
}uVeri;

typedef struct {
	int i;
	float f;
	char str[20];
}sVeri;

int main() {

	printf("Boyut union: %d\n", sizeof(uVeri));
	printf("Boyut struct: %d\n", sizeof(sVeri));

	uVeri.i = 10;
	uVeri.f = 3.25;
	//uVeri.str = "Enes"; YANLIŞ
	//strcpy(uVeri.str, "Enes");

	printf("int i: %d\n", uVeri.i);
	printf("float f: %f\n", uVeri.f);
	printf("string str: %s\n", uVeri.str);

	return 0;
}