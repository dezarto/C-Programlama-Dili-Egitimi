#define _CRT_SCURE_NO_WARNINGS
#include<stdio.h>

/*
	İşaretçiler (Pointers)
	'&' adres'i gösterir
	'*'	adresteki değeri gosterir

*/
int main() {
	
	int a[10], * p;
	p = &a[0];

	*p = 5;
	p += 5;
	*p = 8;

	p -= 2;
	*p = 3;

	//printf("a: %d", a[0]);

	for (int i = 0; i < 10; i++)
	{
		printf("a: %d\n", a[i]);
	}

	return 0;
}