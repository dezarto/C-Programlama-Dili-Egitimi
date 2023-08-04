#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int yapilacakIslem = 1, girilenParaMiktari;
	float bakiye = 0;

	while (yapilacakIslem != 4) {
		printf("Yapmak istenilen islem nedir ?\n Para cekme - 1\n Para Yatirma - 2\n Bakiye Bilgisi - 3\n Cikis yap - 4\n");
		printf("Lutfen yapmak istediginiz islemin numarasini giriniz: ");
		scanf("%d", &yapilacakIslem);

		switch (yapilacakIslem)
		{
		case 1:
			printf("Ne kadar para cekeceksiniz ?");
			scanf("%d", &girilenParaMiktari);

			if (girilenParaMiktari <= bakiye) {
				bakiye -= girilenParaMiktari;
				printf("Islem basarili.\nGuncel bakiyeniz: %f\n\n", bakiye);
			}
			else {
				printf("Yetersiz Bakiye!\nBanka bakiyesi: %f\nCekmek istenilen tutar: %d\n\n", bakiye, girilenParaMiktari);
			}

			break;
		case 2:
			printf("Ne kadar para yatiracaksiniz ?");
			scanf("%d", &girilenParaMiktari);

			if (girilenParaMiktari == 0) {
				printf("Lutfen girilen tutarı kontrol ediniz!");
			}
			else {
				bakiye += girilenParaMiktari;
				printf("Islem basarili.\nGuncel bakiyeniz: %f\n\n", bakiye);
			}

			break;
		case 3:
			printf("Bakiyeniz: %f\n", bakiye);
			break;
		case 4:
			printf("Basarili bir sekilde cikis yapildi.\n");
			break;
		default:
			printf("Lutfen gecerli bir rakam giriniz!\n");
			break;
		}
	}
	return 0;
}