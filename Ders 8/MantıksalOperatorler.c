#include<stdio.h>


/*
*
**** Bilgisayarın anladığı dil ****
* 
*	True = Doğru = 1
*	False = Yanlış = 0
* 
* 
**** Karşılaştırma Operatörleri ****
*	
*	Operatör   İsmi          Kullanımı
* 
*	==		   Eşit			  x == y
*	!=		   Eşit değil	  x != y
*	<		   Küçüktür		  x < y
*	>		   Büyüktür		  x > y
*	<=		   Küçük eşit	  x <= y
*	>=		   Büyük eşit	  x >= y
* 
**** Mantıksal Operatörler ****
* 
*	Operatör   İsmi          Kullanımı				Anlamı
*	
*	&&			Ve			 x > 10 && x < 15		Her iki ifade doğruysa 1 döndürülür, 
*                                                   herhangi biri yanlışsa 0 döndürülür.
* 
*	||			Veya		 x < 10 || x > 15		Herhangi bir ifade doğruysa 1 döndürülür, 
*                                                   ikisi yanlışsa 0 döndürülür.
* 
*	!			Değil		 !(x > 10 && x < 15)    İçerideki ifadenin sonucunu ters çevir,
*                                                   içerisi doğruysa yanlışa çevirir, 
*                                                   yanlışsa doğruya çevirir
* 
*/

int main() {

	int x = 10, y = 6;

	/* Karşılaştırma Operatörleri */

	printf("Esit mi: %d\n", x == y);  // 0
	printf("Esit degil: %d\n", x != y); // 1
	printf("Kucuk mu: %d\n", x < y);  // 0
	printf("Buyuk mu: %d\n", x > y);	// 1
	printf("Kucuk esit mi: %d\n", x <= y);  // 0
	printf("Buyuk esit mi: %d\n\n", x >= y);  // 1

	/* Mantıksal Operatörler */

	printf("Test1: %d\n", (x < 11 && x > 8));  // 1
	printf("Test2: %d\n", (y > 100 || y <= 6)); // 1
	printf("Test3: %d\n", !(x < 11 && x > 8)); // 0

	return 0;
}