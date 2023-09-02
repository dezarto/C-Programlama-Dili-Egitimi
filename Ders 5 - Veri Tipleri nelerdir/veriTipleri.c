#include<stdio.h>

/*
********** Az kullanılan ************

Veri Tipi		  Boyut (bytes)		 Aralık				    Format Specifier

short int				2		-32,768 to 32,767					%hd
unsigned short int      2		0 to 65,535							%hu
unsigned int			4		0 to 4,294,967,295					%u
long int				4		-2,147,483,648 to 2,147,483,647     %ld
unsigned long int		4		0 to 4,294,967,295					%lu
long long int			8		-(2^63) to (2^63)-1					%lld
unsigned long long int  8		0 to 18,446,744,073,709,551,615		%llu
unsigned char			1		0 to 255							%c
long double				16		3.4E-4932 to 1.1E+4932				%Lf

****** En fazla kullanılan ***********

Veri Tipi   Boyut (bytes)		Aralık				   Format Specifier

int				4	    -2,147,483,648 to 2,147,483,647      %d			Tam sayılar
float		    4		 1.2E-38 to 3.4E+38			         %f			Virgüllü sayılar 1,2
double          8		 1.7E-308 to 1.7E+308	             %lf		Virgül sonrası daha fazla detay 1,2578
char            1		-128 to 127							 %c			Karakter
*/


int main() {

	int kilo = 2, gram = 120;

	printf("Elma'nin kilosu : %d\n", kilo);
	printf("Elma'nin grami: %d", gram);

	float boy = 1.78;

	printf("\n\nSinifin ortalama boyu: %.2f", boy);

	double pamuk_hassasiyeti = 1.785;

	printf("\n\nPamugun gramaji: %.3lf", pamuk_hassasiyeti);

	char karakter = 'a';

	printf("\n\nKarakterimiz: %c", karakter);

	return 0;
}