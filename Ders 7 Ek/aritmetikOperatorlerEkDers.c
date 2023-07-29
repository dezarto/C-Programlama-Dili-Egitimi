#include<stdio.h>

/*
*	Aritmetik Operatörler
* 
*	( + ) Toplama Operatörü
*	( – ) Çıkarma Operatörü
*	( * ) Çarpma Operatörü
*	( / ) Bölme Operatörü
*	( % ) Kalan Operatörü
*	( ++ ) Arttırma Operatörü
*	( -- ) Azaltma Operatörü
* 
*	Hızlandıracak Kullanım
* 
*	+=	
*	-=
*	/=
*	*=
*	%=
*	
*	a = a + b; ile a += b; aynı şeydir.
* 
*/

int main() {

	int a = 40, b = 12;

	a += b;  //a = a + b;

	//a -= b; // a = a - b

	//a /= b; // a = a/b

	//a *= b; // a = a * b

	//a %= b; // a = a % b

	printf("sonuc: %d", a);

	return 0;
}