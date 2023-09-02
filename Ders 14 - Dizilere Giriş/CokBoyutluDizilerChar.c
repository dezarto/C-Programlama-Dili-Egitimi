#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char isimler[3][10] = {"Semir", "Adem", "Enes"};

	/*for (int i = 0; i < 3; i++)
	{
		printf("%d. isim: %s\n", i + 1, isimler[i]);
	}*/
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d. satir isim %d. index: %c\n", i, j, isimler[i][j]);
		}
		printf("\n");
	}

	return 0;
}