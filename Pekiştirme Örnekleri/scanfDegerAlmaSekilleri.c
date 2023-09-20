#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int gun, ay, yil;

	printf("Lutfen uygun formatta veri giriniz(gun,ay,yil):");
	scanf("%d/%d/%d", &gun, &ay,&yil);

	printf("Girilen tarih bilgisi: %d.%d.%d", gun, ay, yil);

	return 0;
}