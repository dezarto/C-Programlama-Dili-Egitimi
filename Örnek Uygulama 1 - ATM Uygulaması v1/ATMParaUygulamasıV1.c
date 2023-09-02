#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int islemTuru;
	float anaPara = 250, tutarBilgisi, istenilenParaMiktari;

	printf("Yapmak istenilen islem nedir ?\n");
	printf(" Para cekme - 1\n Para Yatirma - 2\n Bakiye Bilgisi - 3\n");
	printf("Lutfen yapmak istediginiz islemin numarasini giriniz: ");
	scanf("%d", &islemTuru);

	if (islemTuru == 1) {
		printf("Nekadar para cekmek istersiniz: ");
		scanf("%f", &istenilenParaMiktari);

		if (anaPara >= istenilenParaMiktari) {
			anaPara = anaPara - istenilenParaMiktari;
			printf("Paraniz basarli bir sekilde cekilmistir. \nGuncel bakiyeniz: %f", anaPara);
		}
		else {
			printf("Yetersiz bakiye!");
		}
	}
	else if (islemTuru == 2) {
		printf("Nekadar para yatırmak istersiniz: ");
		scanf("%f", &istenilenParaMiktari);

		if (istenilenParaMiktari < 0) {
			printf("Girilen tutar gecersizdir.");
		}
		else if (istenilenParaMiktari == 0) {
			printf("Girilen tutar sifirdir islem iptal edildi.");
		}
		else {
			anaPara = anaPara + istenilenParaMiktari;
			printf("Bakiye basarili bir sekilde yatirilmistir.\nGuncel bakiyeniz: %f", anaPara);
		}
	}
	else if (islemTuru == 3) {
		printf("Bakiye miktari: %f", anaPara);
	}
	else {
		printf("\nGirilen deger gecersizdir, Lutfen kontrol ediniz!\n");
	}

	return 0;
}