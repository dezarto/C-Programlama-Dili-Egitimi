#include<stdio.h>

/*
*	Koşullu İfadeler
* 
* *** Kullanım şekli 1 ***
*	if(koşul){ifade}
* 
* *** Kullanım şekli 2 ***
* 
*	if(koşul){
*		ifade1
*	}
*	else{ifade2}
* 
* *** Kullanım şekli 3 ***
* 
*	if(koşul1){
*		ifade1
*	}
*	else if(koşul2){
*		ifade2
*	} 
*	else{ifade3}
* 
* 
*/


int main() {

	int cuzdan = 1600, x = 8, y = 12;

	if (x < 7 || y > 18) {
		printf("Sonuc 1");
	}
	else if (x < 9 && y > 10) {
		printf("Sonuc 2");
	}
	else {
		printf("Sonuc 3");
	}

	/*
	if (x < y) {
		printf("X sayisi Y sayisindan kucuktur. %d < %d", x, y);
	}
	else {
		printf("X sayisi Y sayisinden buyuktur. %d > %d", x, y);
	}
	*/
	/*
	if (cuzdan == 1500) {
		printf("Yeterli bakiye.");
	}
	else {
		printf("Yetersiz bakiye!");
	}
	*/


	return 0;
}