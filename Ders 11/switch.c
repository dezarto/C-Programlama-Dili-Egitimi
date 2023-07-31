#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
* 
*	switch(ifade){		|	if(ifade){
*						|		//kodlar
*	case x: kodlar		|		
*	break;				|	}else if(ifade){
*						|		//kodlar
*	case y: kodlar		|		
*	break;				|	}else{
*						|		//kodlar
*	default:			|		
*	kodlar				|	}
*	}
* 
*/

int main() {

	int gun;

	printf("Lutfen gun rakamini tusalayin: ");
	scanf("%d", &gun);

	switch (gun) {
	case 1: printf("Pazartesi");
		break;
	case 2: printf("Sali");
		break;
	case 3:printf("Carsamba");
		break;
	case 4:printf("Persembe");
		break;
	case 5:printf("Cuma");
		break;
	case 6:printf("Cumartesi");
		break;
	case 7:printf("Pazar");
		break;
	default:
		printf("Lutfen gecerli bir rakam giriniz!");
	}

	return 0;
}